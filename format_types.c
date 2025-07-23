#include "main.h"

struct format_specifier format_types[] = {
	{'c', _print_char},
	{'s', _print_string},
	{'d', _print_integer},
	{'i', _print_integer},
	{'u', _print_unsigned},
	{'o', _print_octal},
	{'b', _print_binary},
	{'%', NULL},
	{'\0', NULL}
};
