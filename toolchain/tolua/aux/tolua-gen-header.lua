local template = [[
//
// generated by tolua
//
#ifndef __AUTO_GEN_LUA_${HEADER}_H__
#define __AUTO_GEN_LUA_${HEADER}_H__

#include "xgame/xlua.h"

LUALIB_API int luaopen_${MODULE_NAME}(lua_State *L);

#endif
]]

function gen_header(module)
    local HEADER = string.upper(module.NAME)
    local MODULE_NAME = module.NAME
    write(PROJECT_ROOT .. module.HEADER_PATH, format(template))
end