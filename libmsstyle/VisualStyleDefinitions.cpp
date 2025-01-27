#pragma once

#include "VisualStyleDefinitions.h"
#include <stdint.h>
#include <unordered_map>

namespace libmsstyle
{
	const std::unordered_map<int, PropertyInfo> PROPERTY_INFO_MAP
	{
		// BASIC TYPES
		{ 2, { "DIBDATA", 2, "" } },
		{ 8, { "GLYPHDIBDATA", 8, "" } },
		{ 200, { "ENUM", 200, "" } },
		{ 201, { "STRING", 201, "" } },
		{ 202, { "INT", 202, "" } },
		{ 203, { "BOOL", 203, "" } },
		{ 204, { "COLOR", 204, "" } },
		{ 205, { "MARGINS", 205, "" } },
		{ 206, { "FILENAME", 206, "" } },
		{ 207, { "SIZE", 207, "" } },
		{ 208, { "POSITION", 208, "" } },
		{ 209, { "RECT", 209, "" } },
		{ 210, { "FONT", 210, "" } },
		{ 211, { "INTLIST", 211, "" } },
		{ 212, { "HBITMAP", 212, "" } },
		{ 213, { "IMAGEATLAS", 213, "" } }, // DISKSTREAM
		{ 214, { "STREAM", 214, "" } },
		{ 215, { "BITMAPREF", 215, "" } },
		{ 216, { "FLOAT", 216, "" } },
		{ 217, { "FLOATLIST", 217, "" } },

		{ 240, { "SIMPLIFIEDIMAGETYPE", 240, "" } },
		{ 241, { "HIGHCONTRASTCOLORTYPE", 241, "" } }, // integer-like
		{ 242, { "BITMAPIMAGETYPE", 242, "" } },
		{ 243, { "COMPOSEDIMAGETYPE", 243, "" } }, // some id property

		// STRING
		{ 401, { "COLORSCHEMES", 201, "" } }, // begin propery names
		{ 402, { "SIZES", 201, "" } },
		// INT
		{ 403, { "CHARSET", 202, "" } },
		// STRING
		{ 600, { "NAME", 201, "" } },
		{ 601, { "DISPLAYNAME", 201, "" } },
		{ 602, { "TOOLTIP", 201, "" } },
		{ 603, { "COMPANY", 201, "" } },
		{ 604, { "AUTHOR", 201, "" } },
		{ 605, { "COPYRIGHT", 201, "" } },
		{ 606, { "URL", 201, "" } },
		{ 607, { "VERSION", 201, "" } },
		{ 608, { "DESCRIPTION", 201, "" } },
		{ 601, { "FIRST_RCSTRING_NAME", 201, "" } },
		{ 608, { "LAST_RCSTRING_NAME", 201, "" } },
		// FONT
		{ 801, { "CAPTIONFONT", 210, "" } },
		{ 802, { "SMALLCAPTIONFONT", 210, "" } },
		{ 803, { "MENUFONT", 210, "" } },
		{ 804, { "STATUSFONT", 210, "" } },
		{ 805, { "MSGBOXFONT", 210, "" } },
		{ 806, { "ICONTITLEFONT", 210, "" } },
		{ 807, { "HEADING1FONT", 210, "" } },
		{ 808, { "HEADING2FONT", 210, "" } },
		{ 809, { "BODYFONT", 210, "" } },
		{ 801, { "FIRSTFONT", 210, "" } },
		{ 809, { "LASTFONT", 210, "" } },
		// BOOL
		{ 1001, { "FLATMENUS", 203, "" } },
		{ 1001, { "FIRSTBOOL", 203, "" } },
		{ 1001, { "LASTBOOL", 203, "" } },
		// SIZE
		{ 1201, { "SIZINGBORDERWIDTH", 207, "Width of a sizing border." } },
		{ 1202, { "SCROLLBARWIDTH", 207, "Scroll bar width." } },
		{ 1203, { "SCROLLBARHEIGHT", 207, "Scroll bar height." } },
		{ 1204, { "CAPTIONBARWIDTH", 207, "Caption bar width." } },
		{ 1205, { "CAPTIONBARHEIGHT", 207, "Caption bar height." } },
		{ 1206, { "SMCAPTIONBARWIDTH", 207, "Caption bar width." } },
		{ 1207, { "SMCAPTIONBARHEIGHT", 207, "Caption bar height." } },
		{ 1208, { "MENUBARWIDTH", 207, "Menu bar width." } },
		{ 1209, { "MENUBARHEIGHT", 207, "Menu bar height." } },
		{ 1210, { "PADDEDBORDERWIDTH", 207, "Padded border width." } },
		{ 1201, { "FIRSTSIZE", 207, "" } }, // should this be here?
		{ 1210, { "LASTSIZE", 207, "" } }, // should this be here?
		// INT
		{ 1301, { "MINCOLORDEPTH", 202, "" } },
		{ 1301, { "FIRSTINT", 202, "" } }, // should this be here?
		{ 1301, { "LASTINT", 202, "" } }, // should this be here?
		// STRING
		{ 1401, { "CSSNAME", 201, "The name of the CSS file associated with the theme specified by hTheme." } },
		{ 1402, { "XMLNAME", 201, "The name of the XML file associated with the theme specified by hTheme." } },
		{ 1403, { "LASTUPDATED", 201, "" } },
		{ 1404, { "ALIAS", 201, "" } },
		{ 1401, { "FIRSTSTRING", 201, "" } }, // should this be here?
		{ 1404, { "LASTSTRING", 201, "" } }, // should this be here?
		// COLOR
		{ 1601, { "SCROLLBAR", 204, "" } },
		{ 1602, { "BACKGROUND", 204, "" } },
		{ 1603, { "ACTIVECAPTION", 204, "" } },
		{ 1604, { "INACTIVECAPTION", 204, "" } },
		{ 1605, { "MENU", 204, "" } },
		{ 1606, { "WINDOW", 204, "" } },
		{ 1607, { "WINDOWFRAME", 204, "" } },
		{ 1608, { "MENUTEXT", 204, "" } },
		{ 1609, { "WINDOWTEXT", 204, "" } },
		{ 1610, { "CAPTIONTEXT", 204, "" } },
		{ 1611, { "ACTIVEBORDER", 204, "" } },
		{ 1612, { "INACTIVEBORDER", 204, "" } },
		{ 1613, { "APPWORKSPACE", 204, "" } },
		{ 1614, { "HIGHLIGHT", 204, "" } },
		{ 1615, { "HIGHLIGHTTEXT", 204, "" } },
		{ 1616, { "BTNFACE", 204, "" } },
		{ 1617, { "BTNSHADOW", 204, "" } },
		{ 1618, { "GRAYTEXT", 204, "" } },
		{ 1619, { "BTNTEXT", 204, "" } },
		{ 1620, { "INACTIVECAPTIONTEXT", 204, "" } },
		{ 1621, { "BTNHIGHLIGHT", 204, "" } },
		{ 1622, { "DKSHADOW3D", 204, "" } },
		{ 1623, { "LIGHT3D", 204, "" } },
		{ 1624, { "INFOTEXT", 204, "" } },
		{ 1625, { "INFOBK", 204, "" } },
		{ 1626, { "BUTTONALTERNATEFACE", 204, "" } },
		{ 1627, { "HOTTRACKING", 204, "" } },
		{ 1628, { "GRADIENTACTIVECAPTION", 204, "" } },
		{ 1629, { "GRADIENTINACTIVECAPTION", 204, "" } },
		{ 1630, { "MENUHILIGHT", 204, "" } },
		{ 1631, { "MENUBAR", 204, "" } },
		{ 1601, { "FIRSTCOLOR", 204, "" } },
		{ 1631, { "LASTCOLOR", 204, "" } },
		// INT
		{ 1801, { "FROMHUE1", 202, "" } },
		{ 1802, { "FROMHUE2", 202, "" } },
		{ 1803, { "FROMHUE3", 202, "" } },
		{ 1804, { "FROMHUE4", 202, "" } },
		{ 1805, { "FROMHUE5", 202, "" } },
		{ 1806, { "TOHUE1", 202, "" } },
		{ 1807, { "TOHUE2", 202, "" } },
		{ 1808, { "TOHUE3", 202, "" } },
		{ 1809, { "TOHUE4", 202, "" } },
		{ 1810, { "TOHUE5", 202, "" } },
		// COLOR - Weird
		{ 2001, { "FROMCOLOR1", 204, "" } },
		{ 2002, { "FROMCOLOR2", 204, "" } },
		{ 2003, { "FROMCOLOR3", 204, "" } },
		{ 2004, { "FROMCOLOR4", 204, "" } },
		{ 2005, { "FROMCOLOR5", 204, "" } },
		// INT - Weird
		{ 2006, { "TOCOLOR1", 202, "" } },
		{ 2007, { "TOCOLOR2", 202, "" } },
		{ 2008, { "TOCOLOR3", 202, "" } },
		{ 2009, { "TOCOLOR4", 202, "" } },
		{ 2010, { "TOCOLOR5", 202, "" } },
		// BOOL
		{ 2201, { "TRANSPARENT", 203, "" } },
		{ 2202, { "AUTOSIZE", 203, "TRUE if the nonclient caption area associated with the part and state vary with text width." } },
		{ 2203, { "BORDERONLY", 203, "TRUE if the image associated with the part and state should only have its border drawn." } },
		{ 2204, { "COMPOSITED", 203, "TRUE if the control associated with the part and state will handle its own compositing of images." } },
		{ 2205, { "BGFILL", 203, "TRUE if true-sized images associated with the part and state are to be drawn on the background fill." } },
		{ 2206, { "GLYPHTRANSPARENT", 203, "TRUE if the glyph associated with the part and state have transparent areas." } },
		{ 2207, { "GLYPHONLY", 203, "TRUE if the glyph associated with the part and state should be drawn without a background." } },
		{ 2208, { "ALWAYSSHOWSIZINGBAR", 203, "TRUE if the sizing bar associated with the part and state should always be shown." } },
		{ 2209, { "MIRRORIMAGE", 203, "TRUE if the image associated with the part and state should be flipped if the window is being viewed in right-to-left reading mode." } },
		{ 2210, { "UNIFORMSIZING", 203, "TRUE if the image associated with the part and state must have equal height and width. " } },
		{ 2211, { "INTEGRALSIZING", 203, "TRUE if the truesize image or border associated with the part and state must be sized to a factor of 2." } },
		{ 2212, { "SOURCEGROW", 203, "TRUE if the image associated with the part and state will scale larger in size if necessary." } },
		{ 2213, { "SOURCESHRINK", 203, "TRUE if the image associated with the part and state will scale smaller in size if necessary." } },
		{ 2214, { "DRAWBORDERS", 203, "" } },
		{ 2215, { "NOETCHEDEFFECT", 203, "" } },
		{ 2216, { "TEXTAPPLYOVERLAY", 203, "" } },
		{ 2217, { "TEXTGLOW", 203, "" } },
		{ 2218, { "TEXTITALIC", 203, "" } },
		{ 2219, { "COMPOSITEDOPAQUE", 203, "" } },
		{ 2220, { "LOCALIZEDMIRRORIMAGE", 203, "" } },
		// INT
		{ 2401, { "IMAGECOUNT", 202, "The number of state images present in an image file." } },
		{ 2402, { "ALPHALEVEL", 202, "The alpha value (0-255) used for DrawThemeIcon." } },
		{ 2403, { "BORDERSIZE", 202, "The thickness of the border drawn if this part uses a border fill." } },
		{ 2404, { "ROUNDCORNERWIDTH", 202, "The roundness (0 to 100 percent) of the part's corners." } },
		{ 2405, { "ROUNDCORNERHEIGHT", 202, "The roundness (0 to 100 percent) of the part's corners." } },
		{ 2406, { "GRADIENTRATIO1", 202, "The amount of the first gradient color (TMT_GRADIENTCOLOR1) to use in drawing the part. This value can be from 0 to 255, but this value plus the values of each of the GRADIENTRATIO values must add up to 255." } },
		{ 2407, { "GRADIENTRATIO2", 202, "The amount of the second gradient color (TMT_GRADIENTCOLOR2) to use in drawing the part." } },
		{ 2408, { "GRADIENTRATIO3", 202, "The amount of the third gradient color (TMT_GRADIENTCOLOR3) to use in drawing the part." } },
		{ 2409, { "GRADIENTRATIO4", 202, "The amount of the fourth gradient color (TMT_GRADIENTCOLOR4) to use in drawing the part." } },
		{ 2410, { "GRADIENTRATIO5", 202, "The amount of the fifth gradient color (TMT_GRADIENTCOLOR5) to use in drawing the part." } },
		{ 2411, { "PROGRESSCHUNKSIZE", 202, "The size of the progress control \"chunk\" shapes that define how far an operation has progressed." } },
		{ 2412, { "PROGRESSSPACESIZE", 202, "The total size of all of the progress control \"chunks\"." } },
		{ 2413, { "SATURATION", 202, "The amount of saturation (0-255) to apply to an icon drawn using DrawThemeIcon." } },
		{ 2414, { "TEXTBORDERSIZE", 202, "The thickness of the border drawn around text characters." } },
		{ 2415, { "ALPHATHRESHOLD", 202, "The minimum alpha value (0-255) that a pixel must have to be considered opaque." } },
		{ 2416, { "WIDTH", 202, "The width of the part." } },
		{ 2417, { "HEIGHT", 202, "The height of the part." } },
		{ 2418, { "GLYPHINDEX", 202, "The character index into the selected font that will be used for the glyph, if the part uses a font-based glyph." } },
		{ 2419, { "TRUESIZESTRETCHMARK", 202, "The percentage of a true-size image's original size at which the image will be stretched." } },
		{ 2420, { "MINDPI1", 202, "The minimum dots per inch (dpi) that the first image file was designed for." } },
		{ 2421, { "MINDPI2", 202, "The minimum dpi that the second image file was designed for." } },
		{ 2422, { "MINDPI3", 202, "The minimum dpi that the third image file was designed for." } },
		{ 2423, { "MINDPI4", 202, "The minimum dpi that the fourth image file was designed for." } },
		{ 2424, { "MINDPI5", 202, "The minimum dpi that the fifth image file was designed for." } },
		{ 2425, { "TEXTGLOWSIZE", 202, "" } },
		{ 2426, { "FRAMESPERSECOND", 202, "" } },
		{ 2427, { "PIXELSPERFRAME", 202, "" } },
		{ 2428, { "ANIMATIONDELAY", 202, "" } },
		{ 2429, { "GLOWINTENSITY", 202, "" } },
		{ 2430, { "OPACITY", 202, "" } },
		{ 2431, { "COLORIZATIONCOLOR", 202, "" } },
		{ 2432, { "COLORIZATIONOPACITY", 202, "" } },
		{ 2433, { "MINDPI6", 202, "" } },	// since win 10
		{ 2434, { "MINDPI7", 202, "" } },	// since win 10
		// FONT
		{ 2601, { "GLYPHFONT", 210, "The font that the glyph associated with this part will be drawn with, if font-based glyphs are used." } },
		// FILENAME (ID)
		{ 3001, { "IMAGEFILE", 206, "The filename of the image associated with this part and state, or the base filename for multiple images associated with this part and state." } },
		{ 3002, { "IMAGEFILE1", 206, "The filename of the first scaled image associated with this part and state, for support of different resolutions." } },
		{ 3003, { "IMAGEFILE2", 206, "The filename of the second scaled image." } },
		{ 3004, { "IMAGEFILE3", 206, "The filename of the third scaled image." } },
		{ 3005, { "IMAGEFILE4", 206, "The filename of the fourth scaled image." } },
		{ 3006, { "IMAGEFILE5", 206, "The filename of the fifth scaled image." } },
		{ 3008, { "GLYPHIMAGEFILE", 206, "The filename for the glyph image associated with this part and state." } },
		{ 3009, { "IMAGEFILE6", 206, "The filename of the sixth scaled image. Only Win10." } },	// since win 10
		{ 3010, { "IMAGEFILE7", 206, "The filename of the seventh scaled image. Only Win10." } },	// since win 10
		// STRING
		{ 3201, { "TEXT", 201, "The text displayed by the part." } },
		{ 3202, { "CLASSICVALUE", 201, "" } },
		// POSITION
		{ 3401, { "OFFSET", 208, "The position offset from the alignment for this part. The alignment is defined by the OFFSETTYPE value." } },
		{ 3402, { "TEXTSHADOWOFFSET", 208, "The offset from the text at which text shadows are drawn." } },
		{ 3403, { "MINSIZE", 208, "The minimum size that the normal image file can be used for before moving to the next smallest image file." } },
		{ 3404, { "MINSIZE1", 208, "The minimum size that the first small image file can be used for." } },
		{ 3405, { "MINSIZE2", 208, "The minimum size that the second small image file can be used for." } },
		{ 3406, { "MINSIZE3", 208, "The minimum size that the third small image file can be used for." } },
		{ 3407, { "MINSIZE4", 208, "The minimum size that the fourth small image file can be used for." } },
		{ 3408, { "MINSIZE5", 208, "The minimum size that the fifth small image file can be used for." } },
		{ 3409, { "NORMALSIZE", 208, "The size of the normal image associated with this part." } },
		// MARGINS
		{ 3601, { "SIZINGMARGINS", 205, "The margins used for sizing a non-true-size image." } },
		{ 3602, { "CONTENTMARGINS", 205, "The margins that define where content may be placed within a part. " } },
		{ 3603, { "CAPTIONMARGINS", 205, "The margins that define where caption text may be placed within a part." } },
		// COLOR
		{ 3801, { "BORDERCOLOR", 204, "The color of the border associated with the part and state." } },
		{ 3802, { "FILLCOLOR", 204, "The color of the background fill associated with the part and state." } },
		{ 3803, { "TEXTCOLOR", 204, "The color of the text associated with this part and state." } },
		{ 3804, { "EDGELIGHTCOLOR", 204, "The light color of the edge associated with this part and state." } },
		{ 3805, { "EDGEHIGHLIGHTCOLOR", 204, "The highlight color of the edge associated with this part and state." } },
		{ 3806, { "EDGESHADOWCOLOR", 204, "The shadow color of the edge associated with this part and state." } },
		{ 3807, { "EDGEDKSHADOWCOLOR", 204, "The dark shadow color of the edge associated with this part and state." } },
		{ 3808, { "EDGEFILLCOLOR", 204, "The fill color of the edge associated with this part and state." } },
		{ 3809, { "TRANSPARENTCOLOR", 204, "The transparent color associated with this part and state. If the TMT_TRANSPARENT value for this part and state is TRUE, parts of the graphic that use this color are not drawn." } },
		{ 3810, { "GRADIENTCOLOR1", 204, "The first color of the gradient associated with this part and state." } },
		{ 3811, { "GRADIENTCOLOR2", 204, "The second color of the gradient." } },
		{ 3812, { "GRADIENTCOLOR3", 204, "The third color of the gradient." } },
		{ 3813, { "GRADIENTCOLOR4", 204, "The fourth color of the gradient." } },
		{ 3814, { "GRADIENTCOLOR5", 204, "The fifth color of the gradient." } },
		{ 3815, { "SHADOWCOLOR", 204, "The color of the shadow drawn underneath text associated with this part and state." } },
		{ 3816, { "GLOWCOLOR", 204, "The color of the glow produced by calling DrawThemeIcon using this part and state." } },
		{ 3817, { "TEXTBORDERCOLOR", 204, "The color of the text border associated with this part and state." } },
		{ 3818, { "TEXTSHADOWCOLOR", 204, "The color of the text shadow associated with this part and state." } },
		{ 3819, { "GLYPHTEXTCOLOR", 204, "The color that the font-based glyph associated with this part and state will use." } },
		{ 3820, { "GLYPHTRANSPARENTCOLOR", 204, "The transparent glyph color associated with this part and state. If the TMT_GLYPHTRANSPARENT value for this part and state is TRUE, parts of the glyph that use this color are not drawn." } },
		{ 3821, { "FILLCOLORHINT", 204, "The color used as a fill color hint for custom controls." } },
		{ 3822, { "BORDERCOLORHINT", 204, "The color used as a border color hint for custom controls." } },
		{ 3823, { "ACCENTCOLORHINT", 204, "The color used as an accent color hint for custom controls." } },
		{ 3824, { "TEXTCOLORHINT", 204, "" } },
		{ 3825, { "HEADING1TEXTCOLOR", 204, "" } },
		{ 3826, { "HEADING2TEXTCOLOR", 204, "" } },
		{ 3827, { "BODYTEXTCOLOR", 204, "" } },
		// ENUM
		{ 4001, { "BGTYPE", 200, "The basic drawing type for this part." } },
		{ 4002, { "BORDERTYPE", 200, "The type of border drawn if this part is a border fill." } },
		{ 4003, { "FILLTYPE", 200, "The type of fill shape drawn if this part is a border fill." } },
		{ 4004, { "SIZINGTYPE", 200, "The method used to size an image if this part uses an image file." } },
		{ 4005, { "HALIGN", 200, "The horizontal alignment if this part uses a true-size image." } },
		{ 4006, { "CONTENTALIGNMENT", 200, "The alignment of text in the caption associated with this part." } },
		{ 4007, { "VALIGN", 200, "The vertical alignment if this part uses a true-size image." } },
		{ 4008, { "OFFSETTYPE", 200, "The alignment of this part on the window." } },
		{ 4009, { "ICONEFFECT", 200, "The type of effect to be displayed when this part is drawn using DrawThemeIcon()." } },
		{ 4010, { "TEXTSHADOWTYPE", 200, "The type of shadow effect to draw behind text associated with this part." } },
		{ 4011, { "IMAGELAYOUT", 200, "The type of alignment used when multiple images are drawn." } },
		{ 4012, { "GLYPHTYPE", 200, "The type of glyph drawn on this part." } },
		{ 4013, { "IMAGESELECTTYPE", 200, "The type of method used to select between sized images for this part. " } },
		{ 4014, { "GLYPHFONTSIZINGTYPE", 200, "The type of method used to select between different-sized glyphs." } },
		{ 4015, { "TRUESIZESCALINGTYPE", 200, "The type of scaling used if this part uses a true-sized image." } },
		// BOOL
		{ 5001, { "USERPICTURE", 203, "" } },
		// RECT
		{ 5002, { "DEFAULTPANESIZE", 209, "The default size of the part." } },
		// COLOR
		{ 5003, { "BLENDCOLOR", 204, "The color used as a blend color." } },
		// RECT
		{ 5004, { "CUSTOMSPLITRECT", 209, "" } },
		{ 5005, { "ANIMATIONBUTTONRECT", 209, "" } },
		// INT
		{ 5006, { "ANIMATIONDURATION", 202, "" } },
		// Unknown props found in Win10 styles - High contrast mode related?
		{ 5100, { "UNKNOWN_5100_COLORLIST", 240, "" } },
		{ 5101, { "UNKNOWN_5101_COLORLIST", 240, "" } },
		{ 5102, { "UNKNOWN_5102_ENUM", 200, "" } },
		{ 5103, { "UNKNOWN_5103_COLORLIST", 240, "" } },
		{ 5104, { "UNKNOWN_5104_?", 0, "" } },
		{ 5105, { "UNKNOWN_5105_COLORLIST", 240, "" } },
		{ 5106, { "UNKNOWN_5106_?", 0, "" } },
		{ 5107, { "UNKNOWN_5107_MARGINS", 205, "" } },
		{ 5108, { "UNKNOWN_5108_?", 0, "" } },
		{ 5109, { "UNKNOWN_5109_?", 0, "" } },
		{ 5110, { "BORDERCOLOR_HIGHCONTRAST", 241, "" } },
		{ 5111, { "FILLCOLOR_HIGHCONTRAST", 241, "" } },
		{ 5112, { "TEXTCOLOR_HIGHCONTRAST", 241, "" } },
		{ 5113, { "UNKNOWN_5113_HC", 241, "" } },
		{ 5114, { "UNKNOWN_5114_HC", 241, "" } },
		{ 5115, { "TEXTBORDERCOLOR_HIGHCONTRAST", 241, "" } }, // ?
		{ 5116, { "UNKNOWN_5116_HC", 241, "" } },
		{ 5117, { "UNKNOWN_5117_HC", 241, "" } },
		{ 5118, { "HEADING1TEXTCOLOR_HIGHCONTRAST", 241, "" } },
		{ 5119, { "HEADING2TEXTCOLOR_HIGHCONTRAST", 241, "" } },
		{ 5120, { "BODYTEXTCOLOR_HIGHCONTRAST", 241, "" } },
		{ 5121, { "UNKNOWN_5121_HC", 241, "" } },
		{ 5122, { "UNKNOWN_5122_HC", 241, "" } },
		{ 5128, { "UNKNOWN_5128_INT", 202, "" } },
		{ 5129, { "UNKNOWN_5129_INT", 202, "" } },
		{ 5130, { "UNKNOWN_5130_INT", 202, "" } },
		{ 5144, { "IMAGEFILE1_LITE", 243, "" } },
		{ 5145, { "IMAGEFILE2_LITE", 243, "" } },
		{ 5146, { "IMAGEFILE3_LITE", 243, "" } },
		// INTLIST
		{ 6000, { "TRANSITIONDURATIONS", 211, "" } },
		// BOOL
		{ 7001, { "SCALEDBACKGROUND", 203, "" } },
		// DISKSTREAM
		{ 8000, { "ATLASIMAGE", 213, "" } },
		// STRING
		{ 8001, { "ATLASINPUTIMAGE", 201, "" } },
		// RECT
		{ 8002, { "ATLASRECT", 209, "" } },
		// Types found in AMAP
		{ 20000, { "ANIMATION", 241, "" } },
		{ 20100, { "TIMINGFUNCTION", 242, "" } }
	};

	const std::unordered_map<int, const char*> DATATYPE_MAP =
	{
		{ 2, "DIBDATA" },
		{ 8, "GLYPHDIBDATA" },
		{ 200, "ENUM" },
		{ 201, "STRING" },
		{ 202, "INT" },
		{ 203, "BOOL" },
		{ 204, "COLOR" },
		{ 205, "MARGINS" },
		{ 206, "FILENAME" },
		{ 207, "SIZE" },
		{ 208, "POSITION" },
		{ 209, "RECT" },
		{ 210, "FONT" },
		{ 211, "INTLIST" },
		{ 212, "HBITMAP" },
		{ 213, "DISKSTREAM" },
		{ 214, "STREAM" },
		{ 215, "BITMAPREF" },
		{ 216, "FLOAT" },
		{ 217, "FLOATLIST" },
		{ 240, "SIMPLIFIEDIMAGETYPE" },
		{ 241, "HIGHCONTRASTCOLORTYPE" },
		{ 242, "BITMAPIMAGETYPE" },
		{ 243, "COMPOSEDIMAGETYPE" },
	};
}
