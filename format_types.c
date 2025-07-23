#include "main.h"

struct format_specifier format_types[] = {
	{'c', _print_char},
	{'s', _print_string},
	{'d', _print_integer},
	{'i', _print_integer},
	{'u', _print_unsigned},
	{'o', _print_octal},
	{'x', _print_lower_hexa},
	{'X', _print_upper_hexa},
	{'b', _print_binary},
	{'S', _print_ascii},
	{'%', NULL},
	{'\0', NULL}
};
