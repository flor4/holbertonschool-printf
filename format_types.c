#include "main.h"

struct format_specifier format_types[] = {
	{'c', _print_char},
	{'s', _print_string},
	{'d', _print_integer},
	{'i', _print_integer},
	{'%', NULL},
	{'\0', NULL}
};
