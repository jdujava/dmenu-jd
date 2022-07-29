/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"SauceCodePro Nerd Font Mono:size=10:antialias=true:autohint=true:weight=bold",
	"JoyPixels:pixelsize=11:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                         fg          bg      */
	[SchemeNorm]          = { "#3388cc", "#1e1e1e" },
	[SchemeSel]           = { "#232323", "#2277cc" },
	[SchemeSelHighlight]  = { "#ffff34", "#2277cc" },
	[SchemeNormHighlight] = { "#ff87d7", "#1e1e1e" },
	[SchemeOut]           = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
