package main

import (
	"encoding/xml"
	"flag"
	"os"
	"os/exec"
	"strings"
)

type UiFlagOptions struct {
	HeaderName    string
	WidgetsHeader bool
	Extended      bool
}

func main() {
	var inFile, outFile string
	flagExtraOps := UiFlagOptions{}

	inUsage := "Input .ui file"
	outUsage := "Output .h file or - for stdout"
	headerUsage := "Header file path containing connection definitions to include in output (only used if there are connections)"
	widgetsUsage := "Include header(s) defined in the .ui file for custom widgets"
	extendedUsage := "Attempt to parse the .ui file with extended support for Qt classes"
	shorthandUsage := " (shorthand)"

	flag.StringVar(&inFile, "input_file", "", inUsage)
	flag.StringVar(&inFile, "i", "", inUsage+shorthandUsage)
	flag.StringVar(&outFile, "output_file", "-", outUsage)
	flag.StringVar(&outFile, "o", "-", outUsage+shorthandUsage)
	flag.StringVar(&flagExtraOps.HeaderName, "connections_header", "", headerUsage)
	flag.StringVar(&flagExtraOps.HeaderName, "c", "", headerUsage+shorthandUsage)
	flag.BoolVar(&flagExtraOps.WidgetsHeader, "widgets_header_import", false, widgetsUsage)
	flag.BoolVar(&flagExtraOps.WidgetsHeader, "w", false, widgetsUsage+shorthandUsage)
	flag.BoolVar(&flagExtraOps.Extended, "extended", false, extendedUsage)
	flag.BoolVar(&flagExtraOps.Extended, "e", false, extendedUsage+shorthandUsage)
	flag.Parse()

	if inFile == "" {
		flag.Usage()
		os.Exit(1)
	}

	inXml, err := os.ReadFile(inFile)
	if err != nil {
		exitWithError("Failed to read input file: "+inFile, err)
	}

	var parsed UiFile
	if err = xml.Unmarshal(inXml, &parsed); err != nil {
		exitWithError("Failed to parse UI file: "+inFile, err)
	}

	sanitizeNames(&parsed)

	gosrc, err := generate(strings.Join(os.Args[1:], " "), flagExtraOps, parsed)
	if err != nil {
		exitWithError("Failed to generate source:", err)
	}

	if outFile == "-" {
		cmd := exec.Command("clang-format")
		cmd.Stdin = strings.NewReader(string(gosrc))
		cmd.Stdout = os.Stdout
		cmd.Stderr = os.Stderr
		if err := cmd.Run(); err != nil {
			exitWithError("Failed to format to stdout:", err)
		}
	} else {
		if err := os.WriteFile(outFile, gosrc, 0644); err != nil {
			exitWithError("Failed to write output file: "+outFile, err)
		}

		cmd := exec.Command("clang-format", "-i", outFile)
		cmd.Stderr = os.Stderr
		if err = cmd.Run(); err != nil {
			exitWithError("Failed to format output file:", err)
		}
	}
}

func exitWithError(msg string, err error) {
	os.Stderr.WriteString(msg + "\n" + err.Error() + "\n")
	os.Exit(1)
}
