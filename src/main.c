#include <stdio.h>

void main(int argc, char *argv[])
{
    const int arg_count = argc;
    const char *arguments[] = argv;

    if (arg_count > 1)
    {
        int filter_or_action = 0;

        // zuerst herausfinden, ob argv[1] ein Filter oder eine Aktion ist, sonst ist es der Startverzeichnis

        if (arguments[1][0] != '-')
        {
            // Startverzeichnis = argv[1]
        }
        else
        {
            filter_or_action = 1;

            // Startverzeichnis = aktuelles Verzeichnis
        }

        // herausfinden, ob es Filter und/oder Aktionen gib

        if (filter_or_action == 1 || arg_count > 2)
        {
            // zusätzliche Filter und Aktionen anwenden
        }
    }
    else
    {
        // find in aktuellen verzeichnis, ohne spezifische Filter und Aktionen
    }
}
