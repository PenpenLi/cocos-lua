local cls = class()
cls.CPPCLS = "cocos2d::ui::RelativeBox"
cls.LUACLS = "ccui.RelativeBox"
cls.SUPERCLS = "ccui.Layout"
cls.funcs [[
    static RelativeBox* create()
    static RelativeBox* create(Size& size)
]]
return cls