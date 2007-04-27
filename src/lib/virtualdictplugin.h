#ifndef _STARDICT_VIRTUALDICT_PLUGIN_H_
#define _STARDICT_VIRTUALDICT_PLUGIN_H_

struct StarDictVirtualDictPlugInObject{
	StarDictVirtualDictPlugInObject();

	typedef void (*lookup_func_t)(const char *word, char ***pppWord, char ****ppppWordData);
	lookup_func_t lookup_func;
	bool is_instant;
	const char *dict_name;
};

#endif
