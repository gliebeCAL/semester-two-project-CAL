extern "C" {
	    #include <lua.h>
	    #include <lauxlib.h>
	    #include <lualib.h>
}

int main()
{
	// This loads a new state
	lua_State* L = luaL_newstate();

	// This loads the necessary libraries for lua to do various things
	luaL_openlibs(L);

	// This runs a file in a specified state eg. L
	luaL_dofile(L,"test.lua");

	// This destroys the lua state.  Usually not necessary, but safer than not
	lua_close(L);

	return 0;
}
