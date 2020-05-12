//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	
    {"", "~/.local/bin/statusbar/battery",						5,		0},

    {"", "~/.local/bin/statusbar/clock",						5,		0},

    {"", "~/.local/bin/statusbar/cpu", 10, 0},
    
    {"", "~/.local/bin/statusbar/crypto", 0, 0},

    {"", "~/.local/bin/statusbar/help-icon", 0, 0},

    {"", "~/.local/bin/statusbar/internet", 5, 0},

    /*{"", "~/.local/bin/statusbar/memory", 1, 0},*/

    /*{"", "~/.local/bin/statusbar/pacpackages", 1, 0},*/

    /*{"", "~/.local/bin/statusbar/popupgrade", 1, 0},*/

    {"", "~/.local/bin/statusbar/torrent", 1, 0},

    {"", "~/.local/bin/statusbar/volume", 1, 0},

    {"", "~/.local/bin/statusbar/weather", 1, 0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';


