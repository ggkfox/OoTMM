type CosmeticColor = {
  name: string;
  value: number;
};

export const COLORS = {
  /* Game colors */
  "kokirigreen":  { name: "Kokiri Green", value: 0x1e691b },
  "goronred":     { name: "Goron Red",    value: 0x641400 },
  "zorablue":     { name: "Zora Blue",    value: 0x003c64 },

  /* CSS Colors */
  "indianred":              { name: "Indian Red", value: 0xCD5C5C },
  "lightcoral":             { name: "Light Coral", value: 0xF08080 },
  "salmon":                 { name: "Salmon", value: 0xFA8072 },
  "darksalmon":             { name: "Dark Salmon", value: 0xE9967A },
  "lightsalmon":            { name: "Light Salmon", value: 0xFFA07A },
  "crimson":                { name: "Crimson", value: 0xDC143C },
  "red":                    { name: "Red", value: 0xFF0000 },
  "firebrick":              { name: "Fire Brick", value: 0xB22222 },
  "darkred":                { name: "Dark Red", value: 0x8B0000 },
  "pink":                   { name: "Pink", value: 0xFFC0CB },
  "lightpink":              { name: "Light Pink", value: 0xFFB6C1 },
  "hotpink":                { name: "Hot Pink", value: 0xFF69B4 },
  "deeppink":               { name: "Deep Pink", value: 0xFF1493 },
  "mediumvioletred":        { name: "Medium Violet Red", value: 0xC71585 },
  "palevioletred":          { name: "Pale Violet Red", value: 0xDB7093 },
  "coral":                  { name: "Coral", value: 0xFF7F50 },
  "tomato":                 { name: "Tomato", value: 0xFF6347 },
  "orange-red":             { name: "Orange Red", value: 0xFF4500 },
  "dark-orange":            { name: "Dark Orange", value: 0xFF8C00 },
  "orange":                 { name: "Orange", value: 0xFFA500 },
  "gold":                   { name: "Gold", value: 0xFFD700 },
  "yellow":                 { name: "Yellow", value: 0xFFFF00 },
  "lightyellow":            { name: "Light Yellow", value: 0xFFFFE0 },
  "lemonchiffon":           { name: "Lemon Chiffon", value: 0xFFFACD },
  "lightgoldenrodyellow":   { name: "Light Goldenrod Yellow", value: 0xFAFAD2 },
  "papayawhip":             { name: "Papaya Whip", value: 0xFFEFD5 },
  "moccasin":               { name: "Moccasin", value: 0xFFE4B5 },
  "peachpuff":              { name: "Peach Puff", value: 0xFFDAB9 },
  "palegoldenrod":          { name: "Pale Goldenrod", value: 0xEEE8AA },
  "khaki":                  { name: "Khaki", value: 0xF0E68C },
  "darkkhaki":              { name: "Dark Khaki", value: 0xBDB76B },
  "lavender":               { name: "Lavender", value: 0xE6E6FA },
  "thistle":                { name: "Thistle", value: 0xD8BFD8 },
  "plum":                   { name: "Plum", value: 0xDDA0DD },
  "violet":                 { name: "Violet", value: 0xEE82EE },
  "orchid":                 { name: "Orchid", value: 0xDA70D6 },
  "fuchsia":                { name: "Fuchsia", value: 0xFF00FF },
  "magenta":                { name: "Magenta", value: 0xFF00FF },
  "mediumorchid":           { name: "Medium Orchid", value: 0xBA55D3 },
  "mediumpurple":           { name: "Medium Purple", value: 0x9370DB },
  "rebeccapurple":          { name: "Rebecca Purple", value: 0x663399 },
  "blueviolet":             { name: "Blue Violet", value: 0x8A2BE2 },
  "darkviolet":             { name: "Dark Violet", value: 0x9400D3 },
  "darkorchid":             { name: "Dark Orchid", value: 0x9932CC },
  "darkmagenta":            { name: "Dark Magenta", value: 0x8B008B },
  "purple":                 { name: "Purple", value: 0x800080 },
  "indigo":                 { name: "Indigo", value: 0x4B0082 },
  "slateblue":              { name: "Slate Blue", value: 0x6A5ACD },
  "darkslateblue":          { name: "Dark Slate Blue", value: 0x483D8B },
  "mediumslateblue":        { name: "Medium Slate Blue", value: 0x7B68EE },
  "greenyellow":            { name: "Green Yellow", value: 0xADFF2F },
  "chartreuse":             { name: "Chartreuse", value: 0x7FFF00 },
  "lawngreen":              { name: "Lawn Green", value: 0x7CFC00 },
  "lime":                   { name: "Lime", value: 0x00FF00 },
  "limegreen":              { name: "Lime Green", value: 0x32CD32 },
  "palegreen":              { name: "Pale Green", value: 0x98FB98 },
  "lightgreen":             { name: "Light Green", value: 0x90EE90 },
  "mediumspringgreen":      { name: "Medium Spring Green", value: 0x00FA9A },
  "springgreen":            { name: "Spring Green", value: 0x00FF7F },
  "mediumseagreen":         { name: "Medium Sea Green", value: 0x3CB371 },
  "seagreen":               { name: "Sea Green", value: 0x2E8B57 },
  "forestgreen":            { name: "Forest Green", value: 0x228B22 },
  "green":                  { name: "Green", value: 0x008000 },
  "darkgreen":              { name: "Dark Green", value: 0x006400 },
  "yellowgreen":            { name: "Yellow Green", value: 0x9ACD32 },
  "olivedrab":              { name: "Olive Drab", value: 0x6B8E23 },
  "olive":                  { name: "Olive", value: 0x808000 },
  "darkolivegreen":         { name: "Dark Olive Green", value: 0x556B2F },
  "mediumaquamarine":       { name: "Medium Aquamarine", value: 0x66CDAA },
  "darkseagreen":           { name: "Dark Sea Green", value: 0x8FBC8B },
  "lightseagreen":          { name: "Light Sea Green", value: 0x20B2AA },
  "darkcyan":               { name: "Dark Cyan", value: 0x008B8B },
  "teal":                   { name: "Teal", value: 0x008080 },
  "aqua":                   { name: "Aqua", value: 0x00FFFF },
  "cyan":                   { name: "Cyan", value: 0x00FFFF },
  "lightcyan":              { name: "Light Cyan", value: 0xE0FFFF },
  "paleturquoise":          { name: "Pale Turquoise", value: 0xAFEEEE },
  "aquamarine":             { name: "Aquamarine", value: 0x7FFFD4 },
  "turquoise":              { name: "Turquoise", value: 0x40E0D0 },
  "mediumturquoise":        { name: "Medium Turquoise", value: 0x48D1CC },
  "darkturquoise":          { name: "Dark Turquoise", value: 0x00CED1 },
  "cadetblue":              { name: "Cadet Blue", value: 0x5F9EA0 },
  "steelblue":              { name: "Steel Blue", value: 0x4682B4 },
  "lightsteelblue":         { name: "Light Steel Blue", value: 0xB0C4DE },
  "powderblue":             { name: "Powder Blue", value: 0xB0E0E6 },
  "lightblue":              { name: "Light Blue", value: 0xADD8E6 },
  "skyblue":                { name: "Sky Blue", value: 0x87CEEB },
  "lightskyblue":           { name: "Light Sky Blue", value: 0x87CEFA },
  "deepskyblue":            { name: "Deep Sky Blue", value: 0x00BFFF },
  "dodgerblue":             { name: "Dodger Blue", value: 0x1E90FF },
  "cornflowerblue":         { name: "Cornflower Blue", value: 0x6495ED },
  "royalblue":              { name: "Royal Blue", value: 0x4169E1 },
  "blue":                   { name: "Blue", value: 0x0000FF },
  "mediumblue":             { name: "Medium Blue", value: 0x0000CD },
  "darkblue":               { name: "Dark Blue", value: 0x00008B },
  "navy":                   { name: "Navy", value: 0x000080 },
  "midnightblue":           { name: "Midnight Blue", value: 0x191970 },
  "cornsilk":               { name: "Cornsilk", value: 0xFFF8DC },
  "blanchedalmond":         { name: "Blanched Almond", value: 0xFFEBCD },
  "bisque":                 { name: "Bisque", value: 0xFFE4C4 },
  "navajowhite":            { name: "Navajo White", value: 0xFFDEAD },
  "wheat":                  { name: "Wheat", value: 0xF5DEB3 },
  "burlywood":              { name: "Burly Wood", value: 0xDEB887 },
  "tan":                    { name: "Tan", value: 0xD2B48C },
  "rosybrown":              { name: "Rosy Brown", value: 0xBC8F8F },
  "sandybrown":             { name: "Sandy Brown", value: 0xF4A460 },
  "goldenrod":              { name: "Goldenrod", value: 0xDAA520 },
  "darkgoldenrod":          { name: "Dark Goldenrod", value: 0xB8860B },
  "peru":                   { name: "Peru", value: 0xCD853F },
  "chocolate":              { name: "Chocolate", value: 0xD2691E },
  "saddlebrown":            { name: "Saddle Brown", value: 0x8B4513 },
  "sienna":                 { name: "Sienna", value: 0xA0522D },
  "brown":                  { name: "Brown", value: 0xA52A2A },
  "maroon":                 { name: "Maroon", value: 0x800000 },
  "white":                  { name: "White", value: 0xFFFFFF },
  "snow":                   { name: "Snow", value: 0xFFFAFA },
  "honeydew":               { name: "Honey Dew", value: 0xF0FFF0 },
  "mintcream":              { name: "Mint Cream", value: 0xF5FFFA },
  "azure":                  { name: "Azure", value: 0xF0FFFF },
  "aliceblue":              { name: "Alice Blue", value: 0xF0F8FF },
  "ghostwhite":             { name: "Ghost White", value: 0xF8F8FF },
  "whitesmoke":             { name: "White Smoke", value: 0xF5F5F5 },
  "seashell":               { name: "Sea Shell", value: 0xFFF5EE },
  "beige":                  { name: "Beige", value: 0xF5F5DC },
  "oldlace":                { name: "Old Lace", value: 0xFDF5E6 },
  "floralwhite":            { name: "Floral White", value: 0xFFFAF0 },
  "ivory":                  { name: "Ivory", value: 0xFFFFF0 },
  "antiquewhite":           { name: "Antique White", value: 0xFAEBD7 },
  "linen":                  { name: "Linen", value: 0xFAF0E6 },
  "lavenderblush":          { name: "Lavender Blush", value: 0xFFF0F5 },
  "mistyrose":              { name: "Misty Rose", value: 0xFFE4E1 },
  "gainsboro":              { name: "Gainsboro", value: 0xDCDCDC },
  "lightgray":              { name: "Light Gray", value: 0xD3D3D3 },
  "silver":                 { name: "Silver", value: 0xC0C0C0 },
  "darkgray":               { name: "Dark Gray", value: 0xA9A9A9 },
  "gray":                   { name: "Gray", value: 0x808080 },
  "dimgray":                { name: "Dim Gray", value: 0x696969 },
  "lightslategray":         { name: "Light Slate Gray", value: 0x778899 },
  "slategray":              { name: "Slate Gray", value: 0x708090 },
  "darkslategray":          { name: "Dark Slate Gray", value: 0x2F4F4F },
  "black":                  { name: "Black", value: 0x000000 },
} as const;

export type Color = keyof typeof COLORS;
export type ColorRandom = Color | "random";