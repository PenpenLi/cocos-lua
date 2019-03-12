//
// generated by olua
//
#include "xgame/lua-bindings/lua_conv.h"
#include "xgame/xlua.h"
#include "olua/olua.hpp"

int auto_luacv_push_cocos2d_Vec2(lua_State *L, const cocos2d::Vec2 *value)
{
    if (value) {
        lua_createtable(L, 0, 2);
        olua_rawsetfieldnumber(L, -1, "x", value->x);
        olua_rawsetfieldnumber(L, -1, "y", value->y);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Vec2(lua_State *L, int idx, cocos2d::Vec2 *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->x = (float)olua_checkfieldnumber(L, idx, "x");
    value->y = (float)olua_checkfieldnumber(L, idx, "y");
}

void auto_luacv_pack_cocos2d_Vec2(lua_State *L, int idx, cocos2d::Vec2 *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->x = (float)luaL_checknumber(L, idx + 0);
    value->y = (float)luaL_checknumber(L, idx + 1);
}

int auto_luacv_unpack_cocos2d_Vec2(lua_State *L, const cocos2d::Vec2 *value)
{
    if (value) {
        lua_pushnumber(L, value->x);
        lua_pushnumber(L, value->y);
    } else {
        for (int i = 0; i < 2; i++) {
            lua_pushnil(L);
        }
    }

    return 2;
}

bool auto_luacv_is_cocos2d_Vec2(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_Vec3(lua_State *L, const cocos2d::Vec3 *value)
{
    if (value) {
        lua_createtable(L, 0, 3);
        olua_rawsetfieldnumber(L, -1, "x", value->x);
        olua_rawsetfieldnumber(L, -1, "y", value->y);
        olua_rawsetfieldnumber(L, -1, "z", value->z);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Vec3(lua_State *L, int idx, cocos2d::Vec3 *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->x = (float)olua_checkfieldnumber(L, idx, "x");
    value->y = (float)olua_checkfieldnumber(L, idx, "y");
    value->z = (float)olua_checkfieldnumber(L, idx, "z");
}

void auto_luacv_pack_cocos2d_Vec3(lua_State *L, int idx, cocos2d::Vec3 *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->x = (float)luaL_checknumber(L, idx + 0);
    value->y = (float)luaL_checknumber(L, idx + 1);
    value->z = (float)luaL_checknumber(L, idx + 2);
}

int auto_luacv_unpack_cocos2d_Vec3(lua_State *L, const cocos2d::Vec3 *value)
{
    if (value) {
        lua_pushnumber(L, value->x);
        lua_pushnumber(L, value->y);
        lua_pushnumber(L, value->z);
    } else {
        for (int i = 0; i < 3; i++) {
            lua_pushnil(L);
        }
    }

    return 3;
}

bool auto_luacv_is_cocos2d_Vec3(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_Vec4(lua_State *L, const cocos2d::Vec4 *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldnumber(L, -1, "x", value->x);
        olua_rawsetfieldnumber(L, -1, "y", value->y);
        olua_rawsetfieldnumber(L, -1, "z", value->z);
        olua_rawsetfieldnumber(L, -1, "w", value->w);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Vec4(lua_State *L, int idx, cocos2d::Vec4 *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->x = (float)olua_checkfieldnumber(L, idx, "x");
    value->y = (float)olua_checkfieldnumber(L, idx, "y");
    value->z = (float)olua_checkfieldnumber(L, idx, "z");
    value->w = (float)olua_checkfieldnumber(L, idx, "w");
}

void auto_luacv_pack_cocos2d_Vec4(lua_State *L, int idx, cocos2d::Vec4 *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->x = (float)luaL_checknumber(L, idx + 0);
    value->y = (float)luaL_checknumber(L, idx + 1);
    value->z = (float)luaL_checknumber(L, idx + 2);
    value->w = (float)luaL_checknumber(L, idx + 3);
}

int auto_luacv_unpack_cocos2d_Vec4(lua_State *L, const cocos2d::Vec4 *value)
{
    if (value) {
        lua_pushnumber(L, value->x);
        lua_pushnumber(L, value->y);
        lua_pushnumber(L, value->z);
        lua_pushnumber(L, value->w);
    } else {
        for (int i = 0; i < 4; i++) {
            lua_pushnil(L);
        }
    }

    return 4;
}

bool auto_luacv_is_cocos2d_Vec4(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_Size(lua_State *L, const cocos2d::Size *value)
{
    if (value) {
        lua_createtable(L, 0, 2);
        olua_rawsetfieldnumber(L, -1, "width", value->width);
        olua_rawsetfieldnumber(L, -1, "height", value->height);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Size(lua_State *L, int idx, cocos2d::Size *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->width = (float)olua_checkfieldnumber(L, idx, "width");
    value->height = (float)olua_checkfieldnumber(L, idx, "height");
}

void auto_luacv_pack_cocos2d_Size(lua_State *L, int idx, cocos2d::Size *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->width = (float)luaL_checknumber(L, idx + 0);
    value->height = (float)luaL_checknumber(L, idx + 1);
}

int auto_luacv_unpack_cocos2d_Size(lua_State *L, const cocos2d::Size *value)
{
    if (value) {
        lua_pushnumber(L, value->width);
        lua_pushnumber(L, value->height);
    } else {
        for (int i = 0; i < 2; i++) {
            lua_pushnil(L);
        }
    }

    return 2;
}

bool auto_luacv_is_cocos2d_Size(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_Color3B(lua_State *L, const cocos2d::Color3B *value)
{
    if (value) {
        lua_createtable(L, 0, 3);
        olua_rawsetfieldinteger(L, -1, "r", value->r);
        olua_rawsetfieldinteger(L, -1, "g", value->g);
        olua_rawsetfieldinteger(L, -1, "b", value->b);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Color3B(lua_State *L, int idx, cocos2d::Color3B *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->r = (GLubyte)olua_checkfieldinteger(L, idx, "r");
    value->g = (GLubyte)olua_checkfieldinteger(L, idx, "g");
    value->b = (GLubyte)olua_checkfieldinteger(L, idx, "b");
}

void auto_luacv_pack_cocos2d_Color3B(lua_State *L, int idx, cocos2d::Color3B *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->r = (GLubyte)luaL_checkinteger(L, idx + 0);
    value->g = (GLubyte)luaL_checkinteger(L, idx + 1);
    value->b = (GLubyte)luaL_checkinteger(L, idx + 2);
}

int auto_luacv_unpack_cocos2d_Color3B(lua_State *L, const cocos2d::Color3B *value)
{
    if (value) {
        lua_pushinteger(L, value->r);
        lua_pushinteger(L, value->g);
        lua_pushinteger(L, value->b);
    } else {
        for (int i = 0; i < 3; i++) {
            lua_pushnil(L);
        }
    }

    return 3;
}

bool auto_luacv_is_cocos2d_Color3B(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_Color4B(lua_State *L, const cocos2d::Color4B *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldinteger(L, -1, "r", value->r);
        olua_rawsetfieldinteger(L, -1, "g", value->g);
        olua_rawsetfieldinteger(L, -1, "b", value->b);
        olua_rawsetfieldinteger(L, -1, "a", value->a);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Color4B(lua_State *L, int idx, cocos2d::Color4B *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->r = (GLubyte)olua_checkfieldinteger(L, idx, "r");
    value->g = (GLubyte)olua_checkfieldinteger(L, idx, "g");
    value->b = (GLubyte)olua_checkfieldinteger(L, idx, "b");
    value->a = (GLubyte)olua_checkfieldinteger(L, idx, "a");
}

void auto_luacv_pack_cocos2d_Color4B(lua_State *L, int idx, cocos2d::Color4B *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->r = (GLubyte)luaL_checkinteger(L, idx + 0);
    value->g = (GLubyte)luaL_checkinteger(L, idx + 1);
    value->b = (GLubyte)luaL_checkinteger(L, idx + 2);
    value->a = (GLubyte)luaL_checkinteger(L, idx + 3);
}

int auto_luacv_unpack_cocos2d_Color4B(lua_State *L, const cocos2d::Color4B *value)
{
    if (value) {
        lua_pushinteger(L, value->r);
        lua_pushinteger(L, value->g);
        lua_pushinteger(L, value->b);
        lua_pushinteger(L, value->a);
    } else {
        for (int i = 0; i < 4; i++) {
            lua_pushnil(L);
        }
    }

    return 4;
}

bool auto_luacv_is_cocos2d_Color4B(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_Color4F(lua_State *L, const cocos2d::Color4F *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldnumber(L, -1, "r", value->r);
        olua_rawsetfieldnumber(L, -1, "g", value->g);
        olua_rawsetfieldnumber(L, -1, "b", value->b);
        olua_rawsetfieldnumber(L, -1, "a", value->a);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Color4F(lua_State *L, int idx, cocos2d::Color4F *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->r = (GLfloat)olua_checkfieldnumber(L, idx, "r");
    value->g = (GLfloat)olua_checkfieldnumber(L, idx, "g");
    value->b = (GLfloat)olua_checkfieldnumber(L, idx, "b");
    value->a = (GLfloat)olua_checkfieldnumber(L, idx, "a");
}

void auto_luacv_pack_cocos2d_Color4F(lua_State *L, int idx, cocos2d::Color4F *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->r = (GLfloat)luaL_checknumber(L, idx + 0);
    value->g = (GLfloat)luaL_checknumber(L, idx + 1);
    value->b = (GLfloat)luaL_checknumber(L, idx + 2);
    value->a = (GLfloat)luaL_checknumber(L, idx + 3);
}

int auto_luacv_unpack_cocos2d_Color4F(lua_State *L, const cocos2d::Color4F *value)
{
    if (value) {
        lua_pushnumber(L, value->r);
        lua_pushnumber(L, value->g);
        lua_pushnumber(L, value->b);
        lua_pushnumber(L, value->a);
    } else {
        for (int i = 0; i < 4; i++) {
            lua_pushnil(L);
        }
    }

    return 4;
}

bool auto_luacv_is_cocos2d_Color4F(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_Texture2D_TexParams(lua_State *L, const cocos2d::Texture2D::TexParams *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldinteger(L, -1, "minFilter", value->minFilter);
        olua_rawsetfieldinteger(L, -1, "magFilter", value->magFilter);
        olua_rawsetfieldinteger(L, -1, "wrapS", value->wrapS);
        olua_rawsetfieldinteger(L, -1, "wrapT", value->wrapT);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Texture2D_TexParams(lua_State *L, int idx, cocos2d::Texture2D::TexParams *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->minFilter = (GLuint)olua_checkfieldinteger(L, idx, "minFilter");
    value->magFilter = (GLuint)olua_checkfieldinteger(L, idx, "magFilter");
    value->wrapS = (GLuint)olua_checkfieldinteger(L, idx, "wrapS");
    value->wrapT = (GLuint)olua_checkfieldinteger(L, idx, "wrapT");
}

void auto_luacv_pack_cocos2d_Texture2D_TexParams(lua_State *L, int idx, cocos2d::Texture2D::TexParams *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->minFilter = (GLuint)luaL_checkinteger(L, idx + 0);
    value->magFilter = (GLuint)luaL_checkinteger(L, idx + 1);
    value->wrapS = (GLuint)luaL_checkinteger(L, idx + 2);
    value->wrapT = (GLuint)luaL_checkinteger(L, idx + 3);
}

int auto_luacv_unpack_cocos2d_Texture2D_TexParams(lua_State *L, const cocos2d::Texture2D::TexParams *value)
{
    if (value) {
        lua_pushinteger(L, value->minFilter);
        lua_pushinteger(L, value->magFilter);
        lua_pushinteger(L, value->wrapS);
        lua_pushinteger(L, value->wrapT);
    } else {
        for (int i = 0; i < 4; i++) {
            lua_pushnil(L);
        }
    }

    return 4;
}

bool auto_luacv_is_cocos2d_Texture2D_TexParams(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_Uniform(lua_State *L, const cocos2d::Uniform *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldinteger(L, -1, "location", value->location);
        olua_rawsetfieldinteger(L, -1, "size", value->size);
        olua_rawsetfieldinteger(L, -1, "type", value->type);
        olua_rawsetfieldstring(L, -1, "name", value->name.c_str());
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Uniform(lua_State *L, int idx, cocos2d::Uniform *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->location = (GLint)olua_checkfieldinteger(L, idx, "location");
    value->size = (GLint)olua_checkfieldinteger(L, idx, "size");
    value->type = (GLenum)olua_checkfieldinteger(L, idx, "type");
    value->name = (std::string)olua_checkfieldstring(L, idx, "name");
}

void auto_luacv_pack_cocos2d_Uniform(lua_State *L, int idx, cocos2d::Uniform *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->location = (GLint)luaL_checkinteger(L, idx + 0);
    value->size = (GLint)luaL_checkinteger(L, idx + 1);
    value->type = (GLenum)luaL_checkinteger(L, idx + 2);
    value->name = (std::string)luaL_checkstring(L, idx + 3);
}

int auto_luacv_unpack_cocos2d_Uniform(lua_State *L, const cocos2d::Uniform *value)
{
    if (value) {
        lua_pushinteger(L, value->location);
        lua_pushinteger(L, value->size);
        lua_pushinteger(L, value->type);
        lua_pushstring(L, value->name.c_str());
    } else {
        for (int i = 0; i < 4; i++) {
            lua_pushnil(L);
        }
    }

    return 4;
}

bool auto_luacv_is_cocos2d_Uniform(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_VertexAttrib(lua_State *L, const cocos2d::VertexAttrib *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldinteger(L, -1, "index", value->index);
        olua_rawsetfieldinteger(L, -1, "size", value->size);
        olua_rawsetfieldinteger(L, -1, "type", value->type);
        olua_rawsetfieldstring(L, -1, "name", value->name.c_str());
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_VertexAttrib(lua_State *L, int idx, cocos2d::VertexAttrib *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->index = (GLuint)olua_checkfieldinteger(L, idx, "index");
    value->size = (GLint)olua_checkfieldinteger(L, idx, "size");
    value->type = (GLenum)olua_checkfieldinteger(L, idx, "type");
    value->name = (std::string)olua_checkfieldstring(L, idx, "name");
}

void auto_luacv_pack_cocos2d_VertexAttrib(lua_State *L, int idx, cocos2d::VertexAttrib *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->index = (GLuint)luaL_checkinteger(L, idx + 0);
    value->size = (GLint)luaL_checkinteger(L, idx + 1);
    value->type = (GLenum)luaL_checkinteger(L, idx + 2);
    value->name = (std::string)luaL_checkstring(L, idx + 3);
}

int auto_luacv_unpack_cocos2d_VertexAttrib(lua_State *L, const cocos2d::VertexAttrib *value)
{
    if (value) {
        lua_pushinteger(L, value->index);
        lua_pushinteger(L, value->size);
        lua_pushinteger(L, value->type);
        lua_pushstring(L, value->name.c_str());
    } else {
        for (int i = 0; i < 4; i++) {
            lua_pushnil(L);
        }
    }

    return 4;
}

bool auto_luacv_is_cocos2d_VertexAttrib(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_experimental_Viewport(lua_State *L, const cocos2d::experimental::Viewport *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldnumber(L, -1, "left", value->_left);
        olua_rawsetfieldnumber(L, -1, "bottom", value->_bottom);
        olua_rawsetfieldnumber(L, -1, "width", value->_width);
        olua_rawsetfieldnumber(L, -1, "height", value->_height);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_experimental_Viewport(lua_State *L, int idx, cocos2d::experimental::Viewport *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->_left = (float)olua_checkfieldnumber(L, idx, "left");
    value->_bottom = (float)olua_checkfieldnumber(L, idx, "bottom");
    value->_width = (float)olua_checkfieldnumber(L, idx, "width");
    value->_height = (float)olua_checkfieldnumber(L, idx, "height");
}

void auto_luacv_pack_cocos2d_experimental_Viewport(lua_State *L, int idx, cocos2d::experimental::Viewport *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->_left = (float)luaL_checknumber(L, idx + 0);
    value->_bottom = (float)luaL_checknumber(L, idx + 1);
    value->_width = (float)luaL_checknumber(L, idx + 2);
    value->_height = (float)luaL_checknumber(L, idx + 3);
}

int auto_luacv_unpack_cocos2d_experimental_Viewport(lua_State *L, const cocos2d::experimental::Viewport *value)
{
    if (value) {
        lua_pushnumber(L, value->_left);
        lua_pushnumber(L, value->_bottom);
        lua_pushnumber(L, value->_width);
        lua_pushnumber(L, value->_height);
    } else {
        for (int i = 0; i < 4; i++) {
            lua_pushnil(L);
        }
    }

    return 4;
}

bool auto_luacv_is_cocos2d_experimental_Viewport(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_GLContextAttrs(lua_State *L, const GLContextAttrs *value)
{
    if (value) {
        lua_createtable(L, 0, 7);
        olua_rawsetfieldinteger(L, -1, "redBits", value->redBits);
        olua_rawsetfieldinteger(L, -1, "greenBits", value->greenBits);
        olua_rawsetfieldinteger(L, -1, "blueBits", value->blueBits);
        olua_rawsetfieldinteger(L, -1, "alphaBits", value->alphaBits);
        olua_rawsetfieldinteger(L, -1, "depthBits", value->depthBits);
        olua_rawsetfieldinteger(L, -1, "stencilBits", value->stencilBits);
        olua_rawsetfieldinteger(L, -1, "multisamplingCount", value->multisamplingCount);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_GLContextAttrs(lua_State *L, int idx, GLContextAttrs *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->redBits = (int)olua_checkfieldinteger(L, idx, "redBits");
    value->greenBits = (int)olua_checkfieldinteger(L, idx, "greenBits");
    value->blueBits = (int)olua_checkfieldinteger(L, idx, "blueBits");
    value->alphaBits = (int)olua_checkfieldinteger(L, idx, "alphaBits");
    value->depthBits = (int)olua_checkfieldinteger(L, idx, "depthBits");
    value->stencilBits = (int)olua_checkfieldinteger(L, idx, "stencilBits");
    value->multisamplingCount = (int)olua_checkfieldinteger(L, idx, "multisamplingCount");
}

void auto_luacv_pack_GLContextAttrs(lua_State *L, int idx, GLContextAttrs *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->redBits = (int)luaL_checkinteger(L, idx + 0);
    value->greenBits = (int)luaL_checkinteger(L, idx + 1);
    value->blueBits = (int)luaL_checkinteger(L, idx + 2);
    value->alphaBits = (int)luaL_checkinteger(L, idx + 3);
    value->depthBits = (int)luaL_checkinteger(L, idx + 4);
    value->stencilBits = (int)luaL_checkinteger(L, idx + 5);
    value->multisamplingCount = (int)luaL_checkinteger(L, idx + 6);
}

int auto_luacv_unpack_GLContextAttrs(lua_State *L, const GLContextAttrs *value)
{
    if (value) {
        lua_pushinteger(L, value->redBits);
        lua_pushinteger(L, value->greenBits);
        lua_pushinteger(L, value->blueBits);
        lua_pushinteger(L, value->alphaBits);
        lua_pushinteger(L, value->depthBits);
        lua_pushinteger(L, value->stencilBits);
        lua_pushinteger(L, value->multisamplingCount);
    } else {
        for (int i = 0; i < 7; i++) {
            lua_pushnil(L);
        }
    }

    return 7;
}

bool auto_luacv_is_GLContextAttrs(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}
