local function make_luacls(cppname)
    cppname = string.gsub(cppname, "cocos2d::", "cc.")
    cppname = string.gsub(cppname, "[ *]*$", '')
    return cppname
end

REG_TYPE {
    TYPENAME = 'cocos2d::Data', 
    CONV_FUNC = "xluacv_$$_ccdata",
    VALUE_TYPE = true
}

REG_TYPE {
    TYPENAME = 'cocos2d::Vec2',
    CONV_FUNC = 'auto_luacv_$$_cocos2d_Vec2',
    INIT_VALUE = false,
    VARS = 2,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Vec3',
    CONV_FUNC = 'auto_luacv_$$_cocos2d_Vec3',
    INIT_VALUE = false,
    VARS = 3,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Vec4',
    CONV_FUNC = 'auto_luacv_$$_cocos2d_Vec4',
    INIT_VALUE = false,
    VARS = 4,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Size',
    CONV_FUNC = 'auto_luacv_$$_cocos2d_Size',
    INIT_VALUE = false,
    VARS = 2,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Rect',
    CONV_FUNC = 'manual_luacv_$$_cocos2d_Rect',
    INIT_VALUE = false,
    VARS = 4,
}

REG_TYPE {
    TYPENAME = 'cocos2d::ccBezierConfig',
    CONV_FUNC = 'manual_luacv_$$_cocos2d_ccBezierConfig',
    INIT_VALUE = false,
    VARS = 3,
}

REG_TYPE {
    TYPENAME = 'cocos2d::ValueMap',
    CONV_FUNC = 'manual_luacv_$$_cocos2d_ValueMap',
    INIT_VALUE = false,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Mat4',
    CONV_FUNC = "xluacv_$$_ccmat4",
    INIT_VALUE = false,
    VALUE_TYPE = true,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Color3B',
    CONV_FUNC = 'auto_luacv_$$_cocos2d_Color3B',
    INIT_VALUE = false,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Color4B',
    CONV_FUNC = 'auto_luacv_$$_cocos2d_Color4B',
    INIT_VALUE = false,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Color4F',
    CONV_FUNC = 'auto_luacv_$$_cocos2d_Color4F',
    INIT_VALUE = false,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Vector',
    CONV_FUNC = "xluacv_$$_ccvector",
    INIT_VALUE = false,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Texture2D::TexParams',
    CONV_FUNC = 'auto_luacv_$$_cocos2d_Texture2D_TexParams',
    INIT_VALUE = false,
}

REG_TYPE {
    TYPENAME = 'cocos2d::experimental::Viewport',
    CONV_FUNC = 'auto_luacv_$$_cocos2d_experimental_Viewport',
    INIT_VALUE = false,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Uniform *',
    CONV_FUNC = 'auto_luacv_$$_cocos2d_Uniform',
}

REG_TYPE {
    TYPENAME = 'cocos2d::VertexAttrib *',
    CONV_FUNC = 'auto_luacv_$$_cocos2d_VertexAttrib',
}

REG_TYPE {
    TYPENAME = 'cocos2d::EventListener::ListenerID',
    INIT_VALUE = false,
    DECL_TYPE = 'std::string',
    CONV_FUNC = 'olua_$$_std_string',
}

REG_TYPE {
    TYPENAME = 'GLContextAttrs',
    CONV_FUNC = 'auto_luacv_$$_GLContextAttrs',
    INIT_VALUE = false,
}

REG_TYPE {
    TYPENAME = table.concat({
        'cocos2d::MATRIX_STACK_TYPE',
        'cocos2d::Director::Projection',
        'cocos2d::Texture2D::PixelFormat',
        'cocos2d::Image::Format',
        'cocos2d::Camera::Type',
        'cocos2d::EventListener::Type',
        'cocos2d::Event::Type',
        'cocos2d::EventTouch::EventCode',
        'cocos2d::EventKeyboard::KeyCode',
        'cocos2d::EventMouse::MouseEventType',
        'cocos2d::EventMouse::MouseButton',
        'ResolutionPolicy',
    }, '|'),
    DECL_TYPE = 'lua_Unsigned',
    CONV_FUNC = "olua_$$_uint",
}

REG_TYPE {
    TYPENAME = table.concat({
        'cocos2d::UserDefault *',
        'cocos2d::Renderer *',
        'cocos2d::VRIRenderer *',
        'cocos2d::VRIHeadTracker *',
    }, '|'),
    CONV_FUNC = "olua_$$_cppobj",
    LUACLS = make_luacls,
}

REG_TYPE {
    TYPENAME = table.concat({
        'cocos2d::Ref *',
        'cocos2d::Director *',
        'cocos2d::Scheduler *',
        'cocos2d::ActionManager *',
        'cocos2d::GLView *',
        'cocos2d::GLViewImpl *',
        'cocos2d::GLProgram *',
        'cocos2d::TextureCache *',
        'cocos2d::Texture2D *',
        'cocos2d::SpriteFrame *',
        'cocos2d::Animation *',
        'cocos2d::AnimationFrame *',
        'cocos2d::Image *',
        'cocos2d::Node *',
        'cocos2d::ProtectedNode *',
        'cocos2d::Camera *',
        'cocos2d::Sprite *',
        'cocos2d::Scene *',
        'cocos2d::Action *',
        'cocos2d::FiniteTimeAction *',
        'cocos2d::Speed *',
        'cocos2d::Follow *',
        'cocos2d::ActionInterval *',
        'cocos2d::ActionCamera *',
        'cocos2d::OrbitCamera *',
        'cocos2d::Sequence *',
        'cocos2d::Repeat *',
        'cocos2d::RepeatForever *',
        'cocos2d::Spawn *',
        'cocos2d::RotateTo *',
        'cocos2d::RotateBy *',
        'cocos2d::MoveBy *',
        'cocos2d::MoveTo *',
        'cocos2d::SkewTo *',
        'cocos2d::SkewBy *',
        'cocos2d::ResizeTo *',
        'cocos2d::ResizeBy *',
        'cocos2d::JumpBy *',
        'cocos2d::JumpTo *',
        'cocos2d::BezierBy *',
        'cocos2d::BezierTo *',
        'cocos2d::ScaleTo *',
        'cocos2d::ScaleBy *',
        'cocos2d::Blink *',
        'cocos2d::FadeTo *',
        'cocos2d::FadeIn *',
        'cocos2d::FadeOut *',
        'cocos2d::TintTo *',
        'cocos2d::TintBy *',
        'cocos2d::DelayTime *',
        'cocos2d::ReverseTime *',
        'cocos2d::Animate *',
        'cocos2d::TargetedAction *',
        'cocos2d::ActionFloat *',
        'cocos2d::EventDispatcher *',
        'cocos2d::EventListener *',
        'cocos2d::EventListenerCustom *',
        'cocos2d::EventListenerTouchOneByOne *',
        'cocos2d::EventListenerTouchAllAtOnce *',
        'cocos2d::EventListenerKeyboard *',
        'cocos2d::EventListenerFocus *',
        'cocos2d::EventListenerMouse *',
        'cocos2d::Event *',
        'cocos2d::EventCustom *',
        'cocos2d::EventTouch *',
        'cocos2d::EventKeyboard *',
        'cocos2d::EventAcceleration *',
        'cocos2d::EventFocus *',
        'cocos2d::EventMouse *',
        'cocos2d::Touch *',
        'cocos2d::Acceleration *',
    }, '|'),
    CONV_FUNC = "olua_$$_cppobj",
    LUACLS = make_luacls,
}

REG_TYPE {
    TYPENAME = table.concat({
        'cocos2d::ui::Widget *'
    }, '|'),
    CONV_FUNC = "olua_$$_cppobj",
    LUACLS = function (cppname)
        cppname = string.gsub(cppname, "cocos2d::ui::", "ccui.")
        cppname = string.gsub(cppname, "[ *]*$", '')
        return cppname
    end
}

