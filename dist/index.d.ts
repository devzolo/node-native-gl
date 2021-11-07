declare module 'native-gl' {
  export namespace GL {

    /* AccumOp */
    const ACCUM                          = 0x0100;
    const LOAD                           = 0x0101;
    const RETURN                         = 0x0102;
    const MULT                           = 0x0103;
    const ADD                            = 0x0104;

    /* AlphaFunction */
    const NEVER                          = 0x0200;
    const LESS                           = 0x0201;
    const EQUAL                          = 0x0202;
    const LEQUAL                         = 0x0203;
    const GREATER                        = 0x0204;
    const NOTEQUAL                       = 0x0205;
    const GEQUAL                         = 0x0206;
    const ALWAYS                         = 0x0207;

    /* AttribMask */
    const CURRENT_BIT                    = 0x00000001;
    const POINT_BIT                      = 0x00000002;
    const LINE_BIT                       = 0x00000004;
    const POLYGON_BIT                    = 0x00000008;
    const POLYGON_STIPPLE_BIT            = 0x00000010;
    const PIXEL_MODE_BIT                 = 0x00000020;
    const LIGHTING_BIT                   = 0x00000040;
    const FOG_BIT                        = 0x00000080;
    const DEPTH_BUFFER_BIT               = 0x00000100;
    const ACCUM_BUFFER_BIT               = 0x00000200;
    const STENCIL_BUFFER_BIT             = 0x00000400;
    const VIEWPORT_BIT                   = 0x00000800;
    const TRANSFORM_BIT                  = 0x00001000;
    const ENABLE_BIT                     = 0x00002000;
    const COLOR_BUFFER_BIT               = 0x00004000;
    const HINT_BIT                       = 0x00008000;
    const EVAL_BIT                       = 0x00010000;
    const LIST_BIT                       = 0x00020000;
    const TEXTURE_BIT                    = 0x00040000;
    const SCISSOR_BIT                    = 0x00080000;
    const ALL_ATTRIB_BITS                = 0x000fffff;

    /* BeginMode */
    const POINTS                         = 0x0000;
    const LINES                          = 0x0001;
    const LINE_LOOP                      = 0x0002;
    const LINE_STRIP                     = 0x0003;
    const TRIANGLES                      = 0x0004;
    const TRIANGLE_STRIP                 = 0x0005;
    const TRIANGLE_FAN                   = 0x0006;
    const QUADS                          = 0x0007;
    const QUAD_STRIP                     = 0x0008;
    const POLYGON                        = 0x0009;

    /* BlendingFactorDest */
    const ZERO                           = 0;
    const ONE                            = 1;
    const SRC_COLOR                      = 0x0300;
    const ONE_MINUS_SRC_COLOR            = 0x0301;
    const SRC_ALPHA                      = 0x0302;
    const ONE_MINUS_SRC_ALPHA            = 0x0303;
    const DST_ALPHA                      = 0x0304;
    const ONE_MINUS_DST_ALPHA            = 0x0305;

    /* BlendingFactorSrc */
    /*      GL_ZERO */
    /*      GL_ONE */
    const DST_COLOR                      = 0x0306;
    const ONE_MINUS_DST_COLOR            = 0x0307;
    const SRC_ALPHA_SATURATE             = 0x0308;
    /*      GL_SRC_ALPHA */
    /*      GL_ONE_MINUS_SRC_ALPHA */
    /*      GL_DST_ALPHA */
    /*      GL_ONE_MINUS_DST_ALPHA */

    /* Boolean */
    const TRUE                           = 1;
    const FALSE                          = 0;

    /* ClearBufferMask */
    /*      GL_COLOR_BUFFER_BIT */
    /*      GL_ACCUM_BUFFER_BIT */
    /*      GL_STENCIL_BUFFER_BIT */
    /*      GL_DEPTH_BUFFER_BIT */

    /* ClientArrayType */
    /*      GL_VERTEX_ARRAY */
    /*      GL_NORMAL_ARRAY */
    /*      GL_COLOR_ARRAY */
    /*      GL_INDEX_ARRAY */
    /*      GL_TEXTURE_COORD_ARRAY */
    /*      GL_EDGE_FLAG_ARRAY */

    /* ClipPlaneName */
    const CLIP_PLANE0                    = 0x3000;
    const CLIP_PLANE1                    = 0x3001;
    const CLIP_PLANE2                    = 0x3002;
    const CLIP_PLANE3                    = 0x3003;
    const CLIP_PLANE4                    = 0x3004;
    const CLIP_PLANE5                    = 0x3005;

    /* ColorMaterialFace */
    /*      GL_FRONT */
    /*      GL_BACK */
    /*      GL_FRONT_AND_BACK */

    /* ColorMaterialParameter */
    /*      GL_AMBIENT */
    /*      GL_DIFFUSE */
    /*      GL_SPECULAR */
    /*      GL_EMISSION */
    /*      GL_AMBIENT_AND_DIFFUSE */

    /* ColorPointerType */
    /*      GL_BYTE */
    /*      GL_UNSIGNED_BYTE */
    /*      GL_SHORT */
    /*      GL_UNSIGNED_SHORT */
    /*      GL_INT */
    /*      GL_UNSIGNED_INT */
    /*      GL_FLOAT */
    /*      GL_DOUBLE */

    /* CullFaceMode */
    /*      GL_FRONT */
    /*      GL_BACK */
    /*      GL_FRONT_AND_BACK */

    /* DataType */
    const BYTE                           = 0x1400;
    const UNSIGNED_BYTE                  = 0x1401;
    const SHORT                          = 0x1402;
    const UNSIGNED_SHORT                 = 0x1403;
    const INT                            = 0x1404;
    const UNSIGNED_INT                   = 0x1405;
    const FLOAT                          = 0x1406;
    const _2_BYTES                       = 0x1407;
    const _3_BYTES                       = 0x1408;
    const _4_BYTES                       = 0x1409;
    const DOUBLE                         = 0x140A;

    /* DepthFunction */
    /*      GL_NEVER */
    /*      GL_LESS */
    /*      GL_EQUAL */
    /*      GL_LEQUAL */
    /*      GL_GREATER */
    /*      GL_NOTEQUAL */
    /*      GL_GEQUAL */
    /*      GL_ALWAYS */

    /* DrawBufferMode */
    const NONE                           = 0;
    const FRONT_LEFT                     = 0x0400;
    const FRONT_RIGHT                    = 0x0401;
    const BACK_LEFT                      = 0x0402;
    const BACK_RIGHT                     = 0x0403;
    const FRONT                          = 0x0404;
    const BACK                           = 0x0405;
    const LEFT                           = 0x0406;
    const RIGHT                          = 0x0407;
    const FRONT_AND_BACK                 = 0x0408;
    const AUX0                           = 0x0409;
    const AUX1                           = 0x040A;
    const AUX2                           = 0x040B;
    const AUX3                           = 0x040C;

    /* Enable */
    /*      GL_FOG */
    /*      GL_LIGHTING */
    /*      GL_TEXTURE_1D */
    /*      GL_TEXTURE_2D */
    /*      GL_LINE_STIPPLE */
    /*      GL_POLYGON_STIPPLE */
    /*      GL_CULL_FACE */
    /*      GL_ALPHA_TEST */
    /*      GL_BLEND */
    /*      GL_INDEX_LOGIC_OP */
    /*      GL_COLOR_LOGIC_OP */
    /*      GL_DITHER */
    /*      GL_STENCIL_TEST */
    /*      GL_DEPTH_TEST */
    /*      GL_CLIP_PLANE0 */
    /*      GL_CLIP_PLANE1 */
    /*      GL_CLIP_PLANE2 */
    /*      GL_CLIP_PLANE3 */
    /*      GL_CLIP_PLANE4 */
    /*      GL_CLIP_PLANE5 */
    /*      GL_LIGHT0 */
    /*      GL_LIGHT1 */
    /*      GL_LIGHT2 */
    /*      GL_LIGHT3 */
    /*      GL_LIGHT4 */
    /*      GL_LIGHT5 */
    /*      GL_LIGHT6 */
    /*      GL_LIGHT7 */
    /*      GL_TEXTURE_GEN_S */
    /*      GL_TEXTURE_GEN_T */
    /*      GL_TEXTURE_GEN_R */
    /*      GL_TEXTURE_GEN_Q */
    /*      GL_MAP1_VERTEX_3 */
    /*      GL_MAP1_VERTEX_4 */
    /*      GL_MAP1_COLOR_4 */
    /*      GL_MAP1_INDEX */
    /*      GL_MAP1_NORMAL */
    /*      GL_MAP1_TEXTURE_COORD_1 */
    /*      GL_MAP1_TEXTURE_COORD_2 */
    /*      GL_MAP1_TEXTURE_COORD_3 */
    /*      GL_MAP1_TEXTURE_COORD_4 */
    /*      GL_MAP2_VERTEX_3 */
    /*      GL_MAP2_VERTEX_4 */
    /*      GL_MAP2_COLOR_4 */
    /*      GL_MAP2_INDEX */
    /*      GL_MAP2_NORMAL */
    /*      GL_MAP2_TEXTURE_COORD_1 */
    /*      GL_MAP2_TEXTURE_COORD_2 */
    /*      GL_MAP2_TEXTURE_COORD_3 */
    /*      GL_MAP2_TEXTURE_COORD_4 */
    /*      GL_POINT_SMOOTH */
    /*      GL_LINE_SMOOTH */
    /*      GL_POLYGON_SMOOTH */
    /*      GL_SCISSOR_TEST */
    /*      GL_COLOR_MATERIAL */
    /*      GL_NORMALIZE */
    /*      GL_AUTO_NORMAL */
    /*      GL_VERTEX_ARRAY */
    /*      GL_NORMAL_ARRAY */
    /*      GL_COLOR_ARRAY */
    /*      GL_INDEX_ARRAY */
    /*      GL_TEXTURE_COORD_ARRAY */
    /*      GL_EDGE_FLAG_ARRAY */
    /*      GL_POLYGON_OFFSET_POINT */
    /*      GL_POLYGON_OFFSET_LINE */
    /*      GL_POLYGON_OFFSET_FILL */

    /* ErrorCode */
    const NO_ERROR                       = 0;
    const INVALID_ENUM                   = 0x0500;
    const INVALID_VALUE                  = 0x0501;
    const INVALID_OPERATION              = 0x0502;
    const STACK_OVERFLOW                 = 0x0503;
    const STACK_UNDERFLOW                = 0x0504;
    const OUT_OF_MEMORY                  = 0x0505;

    /* FeedBackMode */
    const _2D                            = 0x0600;
    const _3D                            = 0x0601;
    const _3D_COLOR                      = 0x0602;
    const _3D_COLOR_TEXTURE              = 0x0603;
    const _4D_COLOR_TEXTURE              = 0x0604;

    /* FeedBackToken */
    const PASS_THROUGH_TOKEN             = 0x0700;
    const POINT_TOKEN                    = 0x0701;
    const LINE_TOKEN                     = 0x0702;
    const POLYGON_TOKEN                  = 0x0703;
    const BITMAP_TOKEN                   = 0x0704;
    const DRAW_PIXEL_TOKEN               = 0x0705;
    const COPY_PIXEL_TOKEN               = 0x0706;
    const LINE_RESET_TOKEN               = 0x0707;

    /* FogMode */
    /*      GL_LINEAR */
    const EXP                            = 0x0800;
    const EXP2                           = 0x0801;


    /* FogParameter */
    /*      GL_FOG_COLOR */
    /*      GL_FOG_DENSITY */
    /*      GL_FOG_END */
    /*      GL_FOG_INDEX */
    /*      GL_FOG_MODE */
    /*      GL_FOG_START */

    /* FrontFaceDirection */
    const CW                             = 0x0900;
    const CCW                            = 0x0901;

    /* GetMapTarget */
    const COEFF                          = 0x0A00;
    const ORDER                          = 0x0A01;
    const DOMAIN                         = 0x0A02;

    /* GetPixelMap */
    /*      GL_PIXEL_MAP_I_TO_I */
    /*      GL_PIXEL_MAP_S_TO_S */
    /*      GL_PIXEL_MAP_I_TO_R */
    /*      GL_PIXEL_MAP_I_TO_G */
    /*      GL_PIXEL_MAP_I_TO_B */
    /*      GL_PIXEL_MAP_I_TO_A */
    /*      GL_PIXEL_MAP_R_TO_R */
    /*      GL_PIXEL_MAP_G_TO_G */
    /*      GL_PIXEL_MAP_B_TO_B */
    /*      GL_PIXEL_MAP_A_TO_A */

    /* GetPointerTarget */
    /*      GL_VERTEX_ARRAY_POINTER */
    /*      GL_NORMAL_ARRAY_POINTER */
    /*      GL_COLOR_ARRAY_POINTER */
    /*      GL_INDEX_ARRAY_POINTER */
    /*      GL_TEXTURE_COORD_ARRAY_POINTER */
    /*      GL_EDGE_FLAG_ARRAY_POINTER */

    /* GetTarget */
    const CURRENT_COLOR                  = 0x0B00;
    const CURRENT_INDEX                  = 0x0B01;
    const CURRENT_NORMAL                 = 0x0B02;
    const CURRENT_TEXTURE_COORDS         = 0x0B03;
    const CURRENT_RASTER_COLOR           = 0x0B04;
    const CURRENT_RASTER_INDEX           = 0x0B05;
    const CURRENT_RASTER_TEXTURE_COORDS  = 0x0B06;
    const CURRENT_RASTER_POSITION        = 0x0B07;
    const CURRENT_RASTER_POSITION_VALID  = 0x0B08;
    const CURRENT_RASTER_DISTANCE        = 0x0B09;
    const POINT_SMOOTH                   = 0x0B10;
    const POINT_SIZE                     = 0x0B11;
    const POINT_SIZE_RANGE               = 0x0B12;
    const POINT_SIZE_GRANULARITY         = 0x0B13;
    const LINE_SMOOTH                    = 0x0B20;
    const LINE_WIDTH                     = 0x0B21;
    const LINE_WIDTH_RANGE               = 0x0B22;
    const LINE_WIDTH_GRANULARITY         = 0x0B23;
    const LINE_STIPPLE                   = 0x0B24;
    const LINE_STIPPLE_PATTERN           = 0x0B25;
    const LINE_STIPPLE_REPEAT            = 0x0B26;
    const LIST_MODE                      = 0x0B30;
    const MAX_LIST_NESTING               = 0x0B31;
    const LIST_BASE                      = 0x0B32;
    const LIST_INDEX                     = 0x0B33;
    const POLYGON_MODE                   = 0x0B40;
    const POLYGON_SMOOTH                 = 0x0B41;
    const POLYGON_STIPPLE                = 0x0B42;
    const EDGE_FLAG                      = 0x0B43;
    const CULL_FACE                      = 0x0B44;
    const CULL_FACE_MODE                 = 0x0B45;
    const FRONT_FACE                     = 0x0B46;
    const LIGHTING                       = 0x0B50;
    const LIGHT_MODEL_LOCAL_VIEWER       = 0x0B51;
    const LIGHT_MODEL_TWO_SIDE           = 0x0B52;
    const LIGHT_MODEL_AMBIENT            = 0x0B53;
    const SHADE_MODEL                    = 0x0B54;
    const COLOR_MATERIAL_FACE            = 0x0B55;
    const COLOR_MATERIAL_PARAMETER       = 0x0B56;
    const COLOR_MATERIAL                 = 0x0B57;
    const FOG                            = 0x0B60;
    const FOG_INDEX                      = 0x0B61;
    const FOG_DENSITY                    = 0x0B62;
    const FOG_START                      = 0x0B63;
    const FOG_END                        = 0x0B64;
    const FOG_MODE                       = 0x0B65;
    const FOG_COLOR                      = 0x0B66;
    const DEPTH_RANGE                    = 0x0B70;
    const DEPTH_TEST                     = 0x0B71;
    const DEPTH_WRITEMASK                = 0x0B72;
    const DEPTH_CLEAR_VALUE              = 0x0B73;
    const DEPTH_FUNC                     = 0x0B74;
    const ACCUM_CLEAR_VALUE              = 0x0B80;
    const STENCIL_TEST                   = 0x0B90;
    const STENCIL_CLEAR_VALUE            = 0x0B91;
    const STENCIL_FUNC                   = 0x0B92;
    const STENCIL_VALUE_MASK             = 0x0B93;
    const STENCIL_FAIL                   = 0x0B94;
    const STENCIL_PASS_DEPTH_FAIL        = 0x0B95;
    const STENCIL_PASS_DEPTH_PASS        = 0x0B96;
    const STENCIL_REF                    = 0x0B97;
    const STENCIL_WRITEMASK              = 0x0B98;
    const MATRIX_MODE                    = 0x0BA0;
    const NORMALIZE                      = 0x0BA1;
    const VIEWPORT                       = 0x0BA2;
    const MODELVIEW_STACK_DEPTH          = 0x0BA3;
    const PROJECTION_STACK_DEPTH         = 0x0BA4;
    const TEXTURE_STACK_DEPTH            = 0x0BA5;
    const MODELVIEW_MATRIX               = 0x0BA6;
    const PROJECTION_MATRIX              = 0x0BA7;
    const TEXTURE_MATRIX                 = 0x0BA8;
    const ATTRIB_STACK_DEPTH             = 0x0BB0;
    const CLIENT_ATTRIB_STACK_DEPTH      = 0x0BB1;
    const ALPHA_TEST                     = 0x0BC0;
    const ALPHA_TEST_FUNC                = 0x0BC1;
    const ALPHA_TEST_REF                 = 0x0BC2;
    const DITHER                         = 0x0BD0;
    const BLEND_DST                      = 0x0BE0;
    const BLEND_SRC                      = 0x0BE1;
    const BLEND                          = 0x0BE2;
    const LOGIC_OP_MODE                  = 0x0BF0;
    const INDEX_LOGIC_OP                 = 0x0BF1;
    const COLOR_LOGIC_OP                 = 0x0BF2;
    const AUX_BUFFERS                    = 0x0C00;
    const DRAW_BUFFER                    = 0x0C01;
    const READ_BUFFER                    = 0x0C02;
    const SCISSOR_BOX                    = 0x0C10;
    const SCISSOR_TEST                   = 0x0C11;
    const INDEX_CLEAR_VALUE              = 0x0C20;
    const INDEX_WRITEMASK                = 0x0C21;
    const COLOR_CLEAR_VALUE              = 0x0C22;
    const COLOR_WRITEMASK                = 0x0C23;
    const INDEX_MODE                     = 0x0C30;
    const RGBA_MODE                      = 0x0C31;
    const DOUBLEBUFFER                   = 0x0C32;
    const STEREO                         = 0x0C33;
    const RENDER_MODE                    = 0x0C40;
    const PERSPECTIVE_CORRECTION_HINT    = 0x0C50;
    const POINT_SMOOTH_HINT              = 0x0C51;
    const LINE_SMOOTH_HINT               = 0x0C52;
    const POLYGON_SMOOTH_HINT            = 0x0C53;
    const FOG_HINT                       = 0x0C54;
    const TEXTURE_GEN_S                  = 0x0C60;
    const TEXTURE_GEN_T                  = 0x0C61;
    const TEXTURE_GEN_R                  = 0x0C62;
    const TEXTURE_GEN_Q                  = 0x0C63;
    const PIXEL_MAP_I_TO_I               = 0x0C70;
    const PIXEL_MAP_S_TO_S               = 0x0C71;
    const PIXEL_MAP_I_TO_R               = 0x0C72;
    const PIXEL_MAP_I_TO_G               = 0x0C73;
    const PIXEL_MAP_I_TO_B               = 0x0C74;
    const PIXEL_MAP_I_TO_A               = 0x0C75;
    const PIXEL_MAP_R_TO_R               = 0x0C76;
    const PIXEL_MAP_G_TO_G               = 0x0C77;
    const PIXEL_MAP_B_TO_B               = 0x0C78;
    const PIXEL_MAP_A_TO_A               = 0x0C79;
    const PIXEL_MAP_I_TO_I_SIZE          = 0x0CB0;
    const PIXEL_MAP_S_TO_S_SIZE          = 0x0CB1;
    const PIXEL_MAP_I_TO_R_SIZE          = 0x0CB2;
    const PIXEL_MAP_I_TO_G_SIZE          = 0x0CB3;
    const PIXEL_MAP_I_TO_B_SIZE          = 0x0CB4;
    const PIXEL_MAP_I_TO_A_SIZE          = 0x0CB5;
    const PIXEL_MAP_R_TO_R_SIZE          = 0x0CB6;
    const PIXEL_MAP_G_TO_G_SIZE          = 0x0CB7;
    const PIXEL_MAP_B_TO_B_SIZE          = 0x0CB8;
    const PIXEL_MAP_A_TO_A_SIZE          = 0x0CB9;
    const UNPACK_SWAP_BYTES              = 0x0CF0;
    const UNPACK_LSB_FIRST               = 0x0CF1;
    const UNPACK_ROW_LENGTH              = 0x0CF2;
    const UNPACK_SKIP_ROWS               = 0x0CF3;
    const UNPACK_SKIP_PIXELS             = 0x0CF4;
    const UNPACK_ALIGNMENT               = 0x0CF5;
    const PACK_SWAP_BYTES                = 0x0D00;
    const PACK_LSB_FIRST                 = 0x0D01;
    const PACK_ROW_LENGTH                = 0x0D02;
    const PACK_SKIP_ROWS                 = 0x0D03;
    const PACK_SKIP_PIXELS               = 0x0D04;
    const PACK_ALIGNMENT                 = 0x0D05;
    const MAP_COLOR                      = 0x0D10;
    const MAP_STENCIL                    = 0x0D11;
    const INDEX_SHIFT                    = 0x0D12;
    const INDEX_OFFSET                   = 0x0D13;
    const RED_SCALE                      = 0x0D14;
    const RED_BIAS                       = 0x0D15;
    const ZOOM_X                         = 0x0D16;
    const ZOOM_Y                         = 0x0D17;
    const GREEN_SCALE                    = 0x0D18;
    const GREEN_BIAS                     = 0x0D19;
    const BLUE_SCALE                     = 0x0D1A;
    const BLUE_BIAS                      = 0x0D1B;
    const ALPHA_SCALE                    = 0x0D1C;
    const ALPHA_BIAS                     = 0x0D1D;
    const DEPTH_SCALE                    = 0x0D1E;
    const DEPTH_BIAS                     = 0x0D1F;
    const MAX_EVAL_ORDER                 = 0x0D30;
    const MAX_LIGHTS                     = 0x0D31;
    const MAX_CLIP_PLANES                = 0x0D32;
    const MAX_TEXTURE_SIZE               = 0x0D33;
    const MAX_PIXEL_MAP_TABLE            = 0x0D34;
    const MAX_ATTRIB_STACK_DEPTH         = 0x0D35;
    const MAX_MODELVIEW_STACK_DEPTH      = 0x0D36;
    const MAX_NAME_STACK_DEPTH           = 0x0D37;
    const MAX_PROJECTION_STACK_DEPTH     = 0x0D38;
    const MAX_TEXTURE_STACK_DEPTH        = 0x0D39;
    const MAX_VIEWPORT_DIMS              = 0x0D3A;
    const MAX_CLIENT_ATTRIB_STACK_DEPTH  = 0x0D3B;
    const SUBPIXEL_BITS                  = 0x0D50;
    const INDEX_BITS                     = 0x0D51;
    const RED_BITS                       = 0x0D52;
    const GREEN_BITS                     = 0x0D53;
    const BLUE_BITS                      = 0x0D54;
    const ALPHA_BITS                     = 0x0D55;
    const DEPTH_BITS                     = 0x0D56;
    const STENCIL_BITS                   = 0x0D57;
    const ACCUM_RED_BITS                 = 0x0D58;
    const ACCUM_GREEN_BITS               = 0x0D59;
    const ACCUM_BLUE_BITS                = 0x0D5A;
    const ACCUM_ALPHA_BITS               = 0x0D5B;
    const NAME_STACK_DEPTH               = 0x0D70;
    const AUTO_NORMAL                    = 0x0D80;
    const MAP1_COLOR_4                   = 0x0D90;
    const MAP1_INDEX                     = 0x0D91;
    const MAP1_NORMAL                    = 0x0D92;
    const MAP1_TEXTURE_COORD_1           = 0x0D93;
    const MAP1_TEXTURE_COORD_2           = 0x0D94;
    const MAP1_TEXTURE_COORD_3           = 0x0D95;
    const MAP1_TEXTURE_COORD_4           = 0x0D96;
    const MAP1_VERTEX_3                  = 0x0D97;
    const MAP1_VERTEX_4                  = 0x0D98;
    const MAP2_COLOR_4                   = 0x0DB0;
    const MAP2_INDEX                     = 0x0DB1;
    const MAP2_NORMAL                    = 0x0DB2;
    const MAP2_TEXTURE_COORD_1           = 0x0DB3;
    const MAP2_TEXTURE_COORD_2           = 0x0DB4;
    const MAP2_TEXTURE_COORD_3           = 0x0DB5;
    const MAP2_TEXTURE_COORD_4           = 0x0DB6;
    const MAP2_VERTEX_3                  = 0x0DB7;
    const MAP2_VERTEX_4                  = 0x0DB8;
    const MAP1_GRID_DOMAIN               = 0x0DD0;
    const MAP1_GRID_SEGMENTS             = 0x0DD1;
    const MAP2_GRID_DOMAIN               = 0x0DD2;
    const MAP2_GRID_SEGMENTS             = 0x0DD3;
    const TEXTURE_1D                     = 0x0DE0;
    const TEXTURE_2D                     = 0x0DE1;
    const FEEDBACK_BUFFER_POINTER        = 0x0DF0;
    const FEEDBACK_BUFFER_SIZE           = 0x0DF1;
    const FEEDBACK_BUFFER_TYPE           = 0x0DF2;
    const SELECTION_BUFFER_POINTER       = 0x0DF3;
    const SELECTION_BUFFER_SIZE          = 0x0DF4;
    /*      GL_TEXTURE_BINDING_1D */
    /*      GL_TEXTURE_BINDING_2D */
    /*      GL_VERTEX_ARRAY */
    /*      GL_NORMAL_ARRAY */
    /*      GL_COLOR_ARRAY */
    /*      GL_INDEX_ARRAY */
    /*      GL_TEXTURE_COORD_ARRAY */
    /*      GL_EDGE_FLAG_ARRAY */
    /*      GL_VERTEX_ARRAY_SIZE */
    /*      GL_VERTEX_ARRAY_TYPE */
    /*      GL_VERTEX_ARRAY_STRIDE */
    /*      GL_NORMAL_ARRAY_TYPE */
    /*      GL_NORMAL_ARRAY_STRIDE */
    /*      GL_COLOR_ARRAY_SIZE */
    /*      GL_COLOR_ARRAY_TYPE */
    /*      GL_COLOR_ARRAY_STRIDE */
    /*      GL_INDEX_ARRAY_TYPE */
    /*      GL_INDEX_ARRAY_STRIDE */
    /*      GL_TEXTURE_COORD_ARRAY_SIZE */
    /*      GL_TEXTURE_COORD_ARRAY_TYPE */
    /*      GL_TEXTURE_COORD_ARRAY_STRIDE */
    /*      GL_EDGE_FLAG_ARRAY_STRIDE */
    /*      GL_POLYGON_OFFSET_FACTOR */
    /*      GL_POLYGON_OFFSET_UNITS */

    /* GetTextureParameter */
    /*      GL_TEXTURE_MAG_FILTER */
    /*      GL_TEXTURE_MIN_FILTER */
    /*      GL_TEXTURE_WRAP_S */
    /*      GL_TEXTURE_WRAP_T */
    const TEXTURE_WIDTH                  = 0x1000;
    const TEXTURE_HEIGHT                 = 0x1001;
    const TEXTURE_INTERNAL_FORMAT        = 0x1003;
    const TEXTURE_BORDER_COLOR           = 0x1004;
    const TEXTURE_BORDER                 = 0x1005;
    /*      GL_TEXTURE_RED_SIZE */
    /*      GL_TEXTURE_GREEN_SIZE */
    /*      GL_TEXTURE_BLUE_SIZE */
    /*      GL_TEXTURE_ALPHA_SIZE */
    /*      GL_TEXTURE_LUMINANCE_SIZE */
    /*      GL_TEXTURE_INTENSITY_SIZE */
    /*      GL_TEXTURE_PRIORITY */
    /*      GL_TEXTURE_RESIDENT */

    /* HintMode */
    const DONT_CARE                      = 0x1100;
    const FASTEST                        = 0x1101;
    const NICEST                         = 0x1102;

    /* HintTarget */
    /*      GL_PERSPECTIVE_CORRECTION_HINT */
    /*      GL_POINT_SMOOTH_HINT */
    /*      GL_LINE_SMOOTH_HINT */
    /*      GL_POLYGON_SMOOTH_HINT */
    /*      GL_FOG_HINT */
    /*      GL_PHONG_HINT */

    /* IndexPointerType */
    /*      GL_SHORT */
    /*      GL_INT */
    /*      GL_FLOAT */
    /*      GL_DOUBLE */

    /* LightModelParameter */
    /*      GL_LIGHT_MODEL_AMBIENT */
    /*      GL_LIGHT_MODEL_LOCAL_VIEWER */
    /*      GL_LIGHT_MODEL_TWO_SIDE */

    /* LightName */
    const LIGHT0                         = 0x4000;
    const LIGHT1                         = 0x4001;
    const LIGHT2                         = 0x4002;
    const LIGHT3                         = 0x4003;
    const LIGHT4                         = 0x4004;
    const LIGHT5                         = 0x4005;
    const LIGHT6                         = 0x4006;
    const LIGHT7                         = 0x4007;

    /* LightParameter */
    const AMBIENT                        = 0x1200;
    const DIFFUSE                        = 0x1201;
    const SPECULAR                       = 0x1202;
    const POSITION                       = 0x1203;
    const SPOT_DIRECTION                 = 0x1204;
    const SPOT_EXPONENT                  = 0x1205;
    const SPOT_CUTOFF                    = 0x1206;
    const CONSTANT_ATTENUATION           = 0x1207;
    const LINEAR_ATTENUATION             = 0x1208;
    const QUADRATIC_ATTENUATION          = 0x1209;

    /* InterleavedArrays */
    /*      GL_V2F */
    /*      GL_V3F */
    /*      GL_C4UB_V2F */
    /*      GL_C4UB_V3F */
    /*      GL_C3F_V3F */
    /*      GL_N3F_V3F */
    /*      GL_C4F_N3F_V3F */
    /*      GL_T2F_V3F */
    /*      GL_T4F_V4F */
    /*      GL_T2F_C4UB_V3F */
    /*      GL_T2F_C3F_V3F */
    /*      GL_T2F_N3F_V3F */
    /*      GL_T2F_C4F_N3F_V3F */
    /*      GL_T4F_C4F_N3F_V4F */

    /* ListMode */
    const COMPILE                        = 0x1300;
    const COMPILE_AND_EXECUTE            = 0x1301;

    /* ListNameType */
    /*      GL_BYTE */
    /*      GL_UNSIGNED_BYTE */
    /*      GL_SHORT */
    /*      GL_UNSIGNED_SHORT */
    /*      GL_INT */
    /*      GL_UNSIGNED_INT */
    /*      GL_FLOAT */
    /*      GL_2_BYTES */
    /*      GL_3_BYTES */
    /*      GL_4_BYTES */

    /* LogicOp */
    const CLEAR                          = 0x1500;
    const AND                            = 0x1501;
    const AND_REVERSE                    = 0x1502;
    const COPY                           = 0x1503;
    const AND_INVERTED                   = 0x1504;
    const NOOP                           = 0x1505;
    const XOR                            = 0x1506;
    const OR                             = 0x1507;
    const NOR                            = 0x1508;
    const EQUIV                          = 0x1509;
    const INVERT                         = 0x150A;
    const OR_REVERSE                     = 0x150B;
    const COPY_INVERTED                  = 0x150C;
    const OR_INVERTED                    = 0x150D;
    const NAND                           = 0x150E;
    const SET                            = 0x150F;

    /* MapTarget */
    /*      GL_MAP1_COLOR_4 */
    /*      GL_MAP1_INDEX */
    /*      GL_MAP1_NORMAL */
    /*      GL_MAP1_TEXTURE_COORD_1 */
    /*      GL_MAP1_TEXTURE_COORD_2 */
    /*      GL_MAP1_TEXTURE_COORD_3 */
    /*      GL_MAP1_TEXTURE_COORD_4 */
    /*      GL_MAP1_VERTEX_3 */
    /*      GL_MAP1_VERTEX_4 */
    /*      GL_MAP2_COLOR_4 */
    /*      GL_MAP2_INDEX */
    /*      GL_MAP2_NORMAL */
    /*      GL_MAP2_TEXTURE_COORD_1 */
    /*      GL_MAP2_TEXTURE_COORD_2 */
    /*      GL_MAP2_TEXTURE_COORD_3 */
    /*      GL_MAP2_TEXTURE_COORD_4 */
    /*      GL_MAP2_VERTEX_3 */
    /*      GL_MAP2_VERTEX_4 */

    /* MaterialFace */
    /*      GL_FRONT */
    /*      GL_BACK */
    /*      GL_FRONT_AND_BACK */

    /* MaterialParameter */
    const EMISSION                       = 0x1600;
    const SHININESS                      = 0x1601;
    const AMBIENT_AND_DIFFUSE            = 0x1602;
    const COLOR_INDEXES                  = 0x1603;
    /*      GL_AMBIENT */
    /*      GL_DIFFUSE */
    /*      GL_SPECULAR */

    /* MatrixMode */
    const MODELVIEW                      = 0x1700;
    const PROJECTION                     = 0x1701;
    const TEXTURE                        = 0x1702;

    /* MeshMode1 */
    /*      GL_POINT */
    /*      GL_LINE */

    /* MeshMode2 */
    /*      GL_POINT */
    /*      GL_LINE */
    /*      GL_FILL */

    /* NormalPointerType */
    /*      GL_BYTE */
    /*      GL_SHORT */
    /*      GL_INT */
    /*      GL_FLOAT */
    /*      GL_DOUBLE */

    /* PixelCopyType */
    const COLOR                          = 0x1800;
    const DEPTH                          = 0x1801;
    const STENCIL                        = 0x1802;

    /* PixelFormat */
    const COLOR_INDEX                    = 0x1900;
    const STENCIL_INDEX                  = 0x1901;
    const DEPTH_COMPONENT                = 0x1902;
    const RED                            = 0x1903;
    const GREEN                          = 0x1904;
    const BLUE                           = 0x1905;
    const ALPHA                          = 0x1906;
    const RGB                            = 0x1907;
    const RGBA                           = 0x1908;
    const LUMINANCE                      = 0x1909;
    const LUMINANCE_ALPHA                = 0x190A;

    /* PixelMap */
    /*      GL_PIXEL_MAP_I_TO_I */
    /*      GL_PIXEL_MAP_S_TO_S */
    /*      GL_PIXEL_MAP_I_TO_R */
    /*      GL_PIXEL_MAP_I_TO_G */
    /*      GL_PIXEL_MAP_I_TO_B */
    /*      GL_PIXEL_MAP_I_TO_A */
    /*      GL_PIXEL_MAP_R_TO_R */
    /*      GL_PIXEL_MAP_G_TO_G */
    /*      GL_PIXEL_MAP_B_TO_B */
    /*      GL_PIXEL_MAP_A_TO_A */

    /* PixelStore */
    /*      GL_UNPACK_SWAP_BYTES */
    /*      GL_UNPACK_LSB_FIRST */
    /*      GL_UNPACK_ROW_LENGTH */
    /*      GL_UNPACK_SKIP_ROWS */
    /*      GL_UNPACK_SKIP_PIXELS */
    /*      GL_UNPACK_ALIGNMENT */
    /*      GL_PACK_SWAP_BYTES */
    /*      GL_PACK_LSB_FIRST */
    /*      GL_PACK_ROW_LENGTH */
    /*      GL_PACK_SKIP_ROWS */
    /*      GL_PACK_SKIP_PIXELS */
    /*      GL_PACK_ALIGNMENT */

    /* PixelTransfer */
    /*      GL_MAP_COLOR */
    /*      GL_MAP_STENCIL */
    /*      GL_INDEX_SHIFT */
    /*      GL_INDEX_OFFSET */
    /*      GL_RED_SCALE */
    /*      GL_RED_BIAS */
    /*      GL_GREEN_SCALE */
    /*      GL_GREEN_BIAS */
    /*      GL_BLUE_SCALE */
    /*      GL_BLUE_BIAS */
    /*      GL_ALPHA_SCALE */
    /*      GL_ALPHA_BIAS */
    /*      GL_DEPTH_SCALE */
    /*      GL_DEPTH_BIAS */

    /* PixelType */
    const BITMAP                         = 0x1A00;
    /*      GL_BYTE */
    /*      GL_UNSIGNED_BYTE */
    /*      GL_SHORT */
    /*      GL_UNSIGNED_SHORT */
    /*      GL_INT */
    /*      GL_UNSIGNED_INT */
    /*      GL_FLOAT */

    /* PolygonMode */
    const POINT                          = 0x1B00;
    const LINE                           = 0x1B01;
    const FILL                           = 0x1B02;

    /* ReadBufferMode */
    /*      GL_FRONT_LEFT */
    /*      GL_FRONT_RIGHT */
    /*      GL_BACK_LEFT */
    /*      GL_BACK_RIGHT */
    /*      GL_FRONT */
    /*      GL_BACK */
    /*      GL_LEFT */
    /*      GL_RIGHT */
    /*      GL_AUX0 */
    /*      GL_AUX1 */
    /*      GL_AUX2 */
    /*      GL_AUX3 */

    /* RenderingMode */
    const RENDER                         = 0x1C00;
    const FEEDBACK                       = 0x1C01;
    const SELECT                         = 0x1C02;

    /* ShadingModel */
    const FLAT                           = 0x1D00;
    const SMOOTH                         = 0x1D01;


    /* StencilFunction */
    /*      GL_NEVER */
    /*      GL_LESS */
    /*      GL_EQUAL */
    /*      GL_LEQUAL */
    /*      GL_GREATER */
    /*      GL_NOTEQUAL */
    /*      GL_GEQUAL */
    /*      GL_ALWAYS */

    /* StencilOp */
    /*      GL_ZERO */
    const KEEP                           = 0x1E00;
    const REPLACE                        = 0x1E01;
    const INCR                           = 0x1E02;
    const DECR                           = 0x1E03;
    /*      GL_INVERT */

    /* StringName */
    const VENDOR                         = 0x1F00;
    const RENDERER                       = 0x1F01;
    const VERSION                        = 0x1F02;
    const EXTENSIONS                     = 0x1F03;

    /* TextureCoordName */
    const S                              = 0x2000;
    const T                              = 0x2001;
    const R                              = 0x2002;
    const Q                              = 0x2003;

    /* TexCoordPointerType */
    /*      GL_SHORT */
    /*      GL_INT */
    /*      GL_FLOAT */
    /*      GL_DOUBLE */

    /* TextureEnvMode */
    const MODULATE                       = 0x2100;
    const DECAL                          = 0x2101;
    /*      GL_BLEND */
    /*      GL_REPLACE */

    /* TextureEnvParameter */
    const TEXTURE_ENV_MODE               = 0x2200;
    const TEXTURE_ENV_COLOR              = 0x2201;

    /* TextureEnvTarget */
    const TEXTURE_ENV                    = 0x2300;

    /* TextureGenMode */
    const EYE_LINEAR                     = 0x2400;
    const OBJECT_LINEAR                  = 0x2401;
    const SPHERE_MAP                     = 0x2402;

    /* TextureGenParameter */
    const TEXTURE_GEN_MODE               = 0x2500;
    const OBJECT_PLANE                   = 0x2501;
    const EYE_PLANE                      = 0x2502;

    /* TextureMagFilter */
    const NEAREST                        = 0x2600;
    const LINEAR                         = 0x2601;

    /* TextureMinFilter */
    /*      GL_NEAREST */
    /*      GL_LINEAR */
    const NEAREST_MIPMAP_NEAREST         = 0x2700;
    const LINEAR_MIPMAP_NEAREST          = 0x2701;
    const NEAREST_MIPMAP_LINEAR          = 0x2702;
    const LINEAR_MIPMAP_LINEAR           = 0x2703;

    /* TextureParameterName */
    const TEXTURE_MAG_FILTER             = 0x2800;
    const TEXTURE_MIN_FILTER             = 0x2801;
    const TEXTURE_WRAP_S                 = 0x2802;
    const TEXTURE_WRAP_T                 = 0x2803;
    /*      GL_TEXTURE_BORDER_COLOR */
    /*      GL_TEXTURE_PRIORITY */

    /* TextureTarget */
    /*      GL_TEXTURE_1D */
    /*      GL_TEXTURE_2D */
    /*      GL_PROXY_TEXTURE_1D */
    /*      GL_PROXY_TEXTURE_2D */

    /* TextureWrapMode */
    const CLAMP                          = 0x2900;
    const REPEAT                         = 0x2901;

    /* VertexPointerType */
    /*      GL_SHORT */
    /*      GL_INT */
    /*      GL_FLOAT */
    /*      GL_DOUBLE */

    /* ClientAttribMask */
    const CLIENT_PIXEL_STORE_BIT         = 0x00000001;
    const CLIENT_VERTEX_ARRAY_BIT        = 0x00000002;
    const CLIENT_ALL_ATTRIB_BITS         = 0xffffffff;

    /* polygon_offset */
    const POLYGON_OFFSET_FACTOR          = 0x8038;
    const POLYGON_OFFSET_UNITS           = 0x2A00;
    const POLYGON_OFFSET_POINT           = 0x2A01;
    const POLYGON_OFFSET_LINE            = 0x2A02;
    const POLYGON_OFFSET_FILL            = 0x8037;

    /* texture */
    const ALPHA4                         = 0x803B;
    const ALPHA8                         = 0x803C;
    const ALPHA12                        = 0x803D;
    const ALPHA16                        = 0x803E;
    const LUMINANCE4                     = 0x803F;
    const LUMINANCE8                     = 0x8040;
    const LUMINANCE12                    = 0x8041;
    const LUMINANCE16                    = 0x8042;
    const LUMINANCE4_ALPHA4              = 0x8043;
    const LUMINANCE6_ALPHA2              = 0x8044;
    const LUMINANCE8_ALPHA8              = 0x8045;
    const LUMINANCE12_ALPHA4             = 0x8046;
    const LUMINANCE12_ALPHA12            = 0x8047;
    const LUMINANCE16_ALPHA16            = 0x8048;
    const INTENSITY                      = 0x8049;
    const INTENSITY4                     = 0x804A;
    const INTENSITY8                     = 0x804B;
    const INTENSITY12                    = 0x804C;
    const INTENSITY16                    = 0x804D;
    const R3_G3_B2                       = 0x2A10;
    const RGB4                           = 0x804F;
    const RGB5                           = 0x8050;
    const RGB8                           = 0x8051;
    const RGB10                          = 0x8052;
    const RGB12                          = 0x8053;
    const RGB16                          = 0x8054;
    const RGBA2                          = 0x8055;
    const RGBA4                          = 0x8056;
    const RGB5_A1                        = 0x8057;
    const RGBA8                          = 0x8058;
    const RGB10_A2                       = 0x8059;
    const RGBA12                         = 0x805A;
    const RGBA16                         = 0x805B;
    const TEXTURE_RED_SIZE               = 0x805C;
    const TEXTURE_GREEN_SIZE             = 0x805D;
    const TEXTURE_BLUE_SIZE              = 0x805E;
    const TEXTURE_ALPHA_SIZE             = 0x805F;
    const TEXTURE_LUMINANCE_SIZE         = 0x8060;
    const TEXTURE_INTENSITY_SIZE         = 0x8061;
    const PROXY_TEXTURE_1D               = 0x8063;
    const PROXY_TEXTURE_2D               = 0x8064;

    /* texture_object */
    const TEXTURE_PRIORITY               = 0x8066;
    const TEXTURE_RESIDENT               = 0x8067;
    const TEXTURE_BINDING_1D             = 0x8068;
    const TEXTURE_BINDING_2D             = 0x8069;

    /* vertex_array */
    const VERTEX_ARRAY                   = 0x8074;
    const NORMAL_ARRAY                   = 0x8075;
    const COLOR_ARRAY                    = 0x8076;
    const INDEX_ARRAY                    = 0x8077;
    const TEXTURE_COORD_ARRAY            = 0x8078;
    const EDGE_FLAG_ARRAY                = 0x8079;
    const VERTEX_ARRAY_SIZE              = 0x807A;
    const VERTEX_ARRAY_TYPE              = 0x807B;
    const VERTEX_ARRAY_STRIDE            = 0x807C;
    const NORMAL_ARRAY_TYPE              = 0x807E;
    const NORMAL_ARRAY_STRIDE            = 0x807F;
    const COLOR_ARRAY_SIZE               = 0x8081;
    const COLOR_ARRAY_TYPE               = 0x8082;
    const COLOR_ARRAY_STRIDE             = 0x8083;
    const INDEX_ARRAY_TYPE               = 0x8085;
    const INDEX_ARRAY_STRIDE             = 0x8086;
    const TEXTURE_COORD_ARRAY_SIZE       = 0x8088;
    const TEXTURE_COORD_ARRAY_TYPE       = 0x8089;
    const TEXTURE_COORD_ARRAY_STRIDE     = 0x808A;
    const EDGE_FLAG_ARRAY_STRIDE         = 0x808C;
    const VERTEX_ARRAY_POINTER           = 0x808E;
    const NORMAL_ARRAY_POINTER           = 0x808F;
    const COLOR_ARRAY_POINTER            = 0x8090;
    const INDEX_ARRAY_POINTER            = 0x8091;
    const TEXTURE_COORD_ARRAY_POINTER    = 0x8092;
    const EDGE_FLAG_ARRAY_POINTER        = 0x8093;
    const V2F                            = 0x2A20;
    const V3F                            = 0x2A21;
    const C4UB_V2F                       = 0x2A22;
    const C4UB_V3F                       = 0x2A23;
    const C3F_V3F                        = 0x2A24;
    const N3F_V3F                        = 0x2A25;
    const C4F_N3F_V3F                    = 0x2A26;
    const T2F_V3F                        = 0x2A27;
    const T4F_V4F                        = 0x2A28;
    const T2F_C4UB_V3F                   = 0x2A29;
    const T2F_C3F_V3F                    = 0x2A2A;
    const T2F_N3F_V3F                    = 0x2A2B;
    const T2F_C4F_N3F_V3F                = 0x2A2C;
    const T4F_C4F_N3F_V4F                = 0x2A2D;

    /* Extensions */
    const EXT_vertex_array               = 1;
    const EXT_bgra                       = 1;
    const EXT_paletted_texture           = 1;
    const WIN_swap_hint                  = 1;
    const WIN_draw_range_elements        = 1;
    const WIN_phong_shading              = 1;
    const WIN_specular_fog               = 1;

    /* EXT_vertex_array */
    const VERTEX_ARRAY_EXT               = 0x8074;
    const NORMAL_ARRAY_EXT               = 0x8075;
    const COLOR_ARRAY_EXT                = 0x8076;
    const INDEX_ARRAY_EXT                = 0x8077;
    const TEXTURE_COORD_ARRAY_EXT        = 0x8078;
    const EDGE_FLAG_ARRAY_EXT            = 0x8079;
    const VERTEX_ARRAY_SIZE_EXT          = 0x807A;
    const VERTEX_ARRAY_TYPE_EXT          = 0x807B;
    const VERTEX_ARRAY_STRIDE_EXT        = 0x807C;
    const VERTEX_ARRAY_COUNT_EXT         = 0x807D;
    const NORMAL_ARRAY_TYPE_EXT          = 0x807E;
    const NORMAL_ARRAY_STRIDE_EXT        = 0x807F;
    const NORMAL_ARRAY_COUNT_EXT         = 0x8080;
    const COLOR_ARRAY_SIZE_EXT           = 0x8081;
    const COLOR_ARRAY_TYPE_EXT           = 0x8082;
    const COLOR_ARRAY_STRIDE_EXT         = 0x8083;
    const COLOR_ARRAY_COUNT_EXT          = 0x8084;
    const INDEX_ARRAY_TYPE_EXT           = 0x8085;
    const INDEX_ARRAY_STRIDE_EXT         = 0x8086;
    const INDEX_ARRAY_COUNT_EXT          = 0x8087;
    const TEXTURE_COORD_ARRAY_SIZE_EXT   = 0x8088;
    const TEXTURE_COORD_ARRAY_TYPE_EXT   = 0x8089;
    const TEXTURE_COORD_ARRAY_STRIDE_EXT = 0x808A;
    const TEXTURE_COORD_ARRAY_COUNT_EXT  = 0x808B;
    const EDGE_FLAG_ARRAY_STRIDE_EXT     = 0x808C;
    const EDGE_FLAG_ARRAY_COUNT_EXT      = 0x808D;
    const VERTEX_ARRAY_POINTER_EXT       = 0x808E;
    const NORMAL_ARRAY_POINTER_EXT       = 0x808F;
    const COLOR_ARRAY_POINTER_EXT        = 0x8090;
    const INDEX_ARRAY_POINTER_EXT        = 0x8091;
    const TEXTURE_COORD_ARRAY_POINTER_EXT = 0x8092;
    const EDGE_FLAG_ARRAY_POINTER_EXT    = 0x8093;
    const DOUBLE_EXT                     = 0x140A;

    /* EXT_bgra */
    const BGR_EXT                        = 0x80E0
    const BGRA_EXT                       = 0x80E1

    /* EXT_paletted_texture */

    /* These must match the GL_COLOR_TABLE_*_SGI enumerants */
    const COLOR_TABLE_FORMAT_EXT         = 0x80D8;
    const COLOR_TABLE_WIDTH_EXT          = 0x80D9;
    const COLOR_TABLE_RED_SIZE_EXT       = 0x80DA;
    const COLOR_TABLE_GREEN_SIZE_EXT     = 0x80DB;
    const COLOR_TABLE_BLUE_SIZE_EXT      = 0x80DC;
    const COLOR_TABLE_ALPHA_SIZE_EXT     = 0x80DD;
    const COLOR_TABLE_LUMINANCE_SIZE_EXT = 0x80DE;
    const COLOR_TABLE_INTENSITY_SIZE_EXT = 0x80DF;

    const COLOR_INDEX1_EXT               = 0x80E2;
    const COLOR_INDEX2_EXT               = 0x80E3;
    const COLOR_INDEX4_EXT               = 0x80E4;
    const COLOR_INDEX8_EXT               = 0x80E5;
    const COLOR_INDEX12_EXT              = 0x80E6;
    const COLOR_INDEX16_EXT              = 0x80E7;

    /* WIN_draw_range_elements */
    const MAX_ELEMENTS_VERTICES_WIN      = 0x80E8;
    const MAX_ELEMENTS_INDICES_WIN       = 0x80E9;

    /* WIN_phong_shading */
    const PHONG_WIN                      = 0x80EA;
    const PHONG_HINT_WIN                 = 0x80EB;

    /* WIN_specular_fog */
    const FOG_SPECULAR_TEXTURE_WIN       = 0x80EC;

    /* For compatibility with OpenGL v1.0 */
    const LOGIC_OP = 0x0BF1;
    const TEXTURE_COMPONENTS  = 0x1003;

    const OK = 0;


    const VERSION_2_0 = 1;

    const BLEND_EQUATION_RGB = 0x8009;
    const VERTEX_ATTRIB_ARRAY_ENABLED = 0x8622;
    const VERTEX_ATTRIB_ARRAY_SIZE = 0x8623;
    const VERTEX_ATTRIB_ARRAY_STRIDE = 0x8624;
    const VERTEX_ATTRIB_ARRAY_TYPE = 0x8625;
    const CURRENT_VERTEX_ATTRIB = 0x8626;
    const VERTEX_PROGRAM_POINT_SIZE = 0x8642;
    const VERTEX_PROGRAM_TWO_SIDE = 0x8643;
    const VERTEX_ATTRIB_ARRAY_POINTER = 0x8645;
    const STENCIL_BACK_FUNC = 0x8800;
    const STENCIL_BACK_FAIL = 0x8801;
    const STENCIL_BACK_PASS_DEPTH_FAIL = 0x8802;
    const STENCIL_BACK_PASS_DEPTH_PASS = 0x8803;
    const MAX_DRAW_BUFFERS = 0x8824;
    const DRAW_BUFFER0 = 0x8825;
    const DRAW_BUFFER1 = 0x8826;
    const DRAW_BUFFER2 = 0x8827;
    const DRAW_BUFFER3 = 0x8828;
    const DRAW_BUFFER4 = 0x8829;
    const DRAW_BUFFER5 = 0x882A;
    const DRAW_BUFFER6 = 0x882B;
    const DRAW_BUFFER7 = 0x882C;
    const DRAW_BUFFER8 = 0x882D;
    const DRAW_BUFFER9 = 0x882E;
    const DRAW_BUFFER10 = 0x882F;
    const DRAW_BUFFER11 = 0x8830;
    const DRAW_BUFFER12 = 0x8831;
    const DRAW_BUFFER13 = 0x8832;
    const DRAW_BUFFER14 = 0x8833;
    const DRAW_BUFFER15 = 0x8834;
    const BLEND_EQUATION_ALPHA = 0x883D;
    const POINT_SPRITE = 0x8861;
    const COORD_REPLACE = 0x8862;
    const MAX_VERTEX_ATTRIBS = 0x8869;
    const VERTEX_ATTRIB_ARRAY_NORMALIZED = 0x886A;
    const MAX_TEXTURE_COORDS = 0x8871;
    const MAX_TEXTURE_IMAGE_UNITS = 0x8872;
    const FRAGMENT_SHADER = 0x8B30;
    const VERTEX_SHADER = 0x8B31;
    const MAX_FRAGMENT_UNIFORM_COMPONENTS = 0x8B49;
    const MAX_VERTEX_UNIFORM_COMPONENTS = 0x8B4A;
    const MAX_VARYING_FLOATS = 0x8B4B;
    const MAX_VERTEX_TEXTURE_IMAGE_UNITS = 0x8B4C;
    const MAX_COMBINED_TEXTURE_IMAGE_UNITS = 0x8B4D;
    const SHADER_TYPE = 0x8B4F;
    const FLOAT_VEC2 = 0x8B50;
    const FLOAT_VEC3 = 0x8B51;
    const FLOAT_VEC4 = 0x8B52;
    const INT_VEC2 = 0x8B53;
    const INT_VEC3 = 0x8B54;
    const INT_VEC4 = 0x8B55;
    const BOOL = 0x8B56;
    const BOOL_VEC2 = 0x8B57;
    const BOOL_VEC3 = 0x8B58;
    const BOOL_VEC4 = 0x8B59;
    const FLOAT_MAT2 = 0x8B5A;
    const FLOAT_MAT3 = 0x8B5B;
    const FLOAT_MAT4 = 0x8B5C;
    const SAMPLER_1D = 0x8B5D;
    const SAMPLER_2D = 0x8B5E;
    const SAMPLER_3D = 0x8B5F;
    const SAMPLER_CUBE = 0x8B60;
    const SAMPLER_1D_SHADOW = 0x8B61;
    const SAMPLER_2D_SHADOW = 0x8B62;
    const DELETE_STATUS = 0x8B80;
    const COMPILE_STATUS = 0x8B81;
    const LINK_STATUS = 0x8B82;
    const VALIDATE_STATUS = 0x8B83;
    const INFO_LOG_LENGTH = 0x8B84;
    const ATTACHED_SHADERS = 0x8B85;
    const ACTIVE_UNIFORMS = 0x8B86;
    const ACTIVE_UNIFORM_MAX_LENGTH = 0x8B87;
    const SHADER_SOURCE_LENGTH = 0x8B88;
    const ACTIVE_ATTRIBUTES = 0x8B89;
    const ACTIVE_ATTRIBUTE_MAX_LENGTH = 0x8B8A;
    const FRAGMENT_SHADER_DERIVATIVE_HINT = 0x8B8B;
    const SHADING_LANGUAGE_VERSION = 0x8B8C;
    const CURRENT_PROGRAM = 0x8B8D;
    const POINT_SPRITE_COORD_ORIGIN = 0x8CA0;
    const LOWER_LEFT = 0x8CA1;
    const UPPER_LEFT = 0x8CA2;
    const STENCIL_BACK_REF = 0x8CA3;
    const STENCIL_BACK_VALUE_MASK = 0x8CA4;
    const STENCIL_BACK_WRITEMASK = 0x8CA5;

//// GL_ARB_internalformat_query2 ////

    const ARB_internalformat_query2 = 1;
    const INTERNALFORMAT_SUPPORTED = 0x826F;
    const INTERNALFORMAT_PREFERRED = 0x8270;
    const INTERNALFORMAT_RED_SIZE = 0x8271;
    const INTERNALFORMAT_GREEN_SIZE = 0x8272;
    const INTERNALFORMAT_BLUE_SIZE = 0x8273;
    const INTERNALFORMAT_ALPHA_SIZE = 0x8274;
    const INTERNALFORMAT_DEPTH_SIZE = 0x8275;
    const INTERNALFORMAT_STENCIL_SIZE = 0x8276;
    const INTERNALFORMAT_SHARED_SIZE = 0x8277;
    const INTERNALFORMAT_RED_TYPE = 0x8278;
    const INTERNALFORMAT_GREEN_TYPE = 0x8279;
    const INTERNALFORMAT_BLUE_TYPE = 0x827A;
    const INTERNALFORMAT_ALPHA_TYPE = 0x827B;
    const INTERNALFORMAT_DEPTH_TYPE = 0x827C;
    const INTERNALFORMAT_STENCIL_TYPE = 0x827D;
    const MAX_WIDTH = 0x827E;
    const MAX_HEIGHT = 0x827F;
    const MAX_DEPTH = 0x8280;
    const MAX_LAYERS = 0x8281;
    const MAX_COMBINED_DIMENSIONS = 0x8282;
    const COLOR_COMPONENTS = 0x8283;
    const DEPTH_COMPONENTS = 0x8284;
    const STENCIL_COMPONENTS = 0x8285;
    const COLOR_RENDERABLE = 0x8286;
    const DEPTH_RENDERABLE = 0x8287;
    const STENCIL_RENDERABLE = 0x8288;
    const FRAMEBUFFER_RENDERABLE = 0x8289;
    const FRAMEBUFFER_RENDERABLE_LAYERED = 0x828A;
    const FRAMEBUFFER_BLEND = 0x828B;
    const READ_PIXELS = 0x828C;
    const READ_PIXELS_FORMAT = 0x828D;
    const READ_PIXELS_TYPE = 0x828E;
    const TEXTURE_IMAGE_FORMAT = 0x828F;
    const TEXTURE_IMAGE_TYPE = 0x8290;
    const GET_TEXTURE_IMAGE_FORMAT = 0x8291;
    const GET_TEXTURE_IMAGE_TYPE = 0x8292;
    const MIPMAP = 0x8293;
    const MANUAL_GENERATE_MIPMAP = 0x8294;
    const AUTO_GENERATE_MIPMAP = 0x8295;
    const COLOR_ENCODING = 0x8296;
    const SRGB_READ = 0x8297;
    const SRGB_WRITE = 0x8298;
    const SRGB_DECODE_ARB = 0x8299;
    const FILTER = 0x829A;
    const VERTEX_TEXTURE = 0x829B;
    const TESS_CONTROL_TEXTURE = 0x829C;
    const TESS_EVALUATION_TEXTURE = 0x829D;
    const GEOMETRY_TEXTURE = 0x829E;
    const FRAGMENT_TEXTURE = 0x829F;
    const COMPUTE_TEXTURE = 0x82A0;
    const TEXTURE_SHADOW = 0x82A1;
    const TEXTURE_GATHER = 0x82A2;
    const TEXTURE_GATHER_SHADOW = 0x82A3;
    const SHADER_IMAGE_LOAD = 0x82A4;
    const SHADER_IMAGE_STORE = 0x82A5;
    const SHADER_IMAGE_ATOMIC = 0x82A6;
    const IMAGE_TEXEL_SIZE = 0x82A7;
    const IMAGE_COMPATIBILITY_CLASS = 0x82A8;
    const IMAGE_PIXEL_FORMAT = 0x82A9;
    const IMAGE_PIXEL_TYPE = 0x82AA;
    const SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST = 0x82AC;
    const SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST = 0x82AD;
    const SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE = 0x82AE;
    const SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE = 0x82AF;
    const TEXTURE_COMPRESSED_BLOCK_WIDTH = 0x82B1;
    const TEXTURE_COMPRESSED_BLOCK_HEIGHT = 0x82B2;
    const TEXTURE_COMPRESSED_BLOCK_SIZE = 0x82B3;
    const CLEAR_BUFFER = 0x82B4;
    const TEXTURE_VIEW = 0x82B5;
    const VIEW_COMPATIBILITY_CLASS = 0x82B6;
    const FULL_SUPPORT = 0x82B7;
    const CAVEAT_SUPPORT = 0x82B8;
    const IMAGE_CLASS_4_X_32 = 0x82B9;
    const IMAGE_CLASS_2_X_32 = 0x82BA;
    const IMAGE_CLASS_1_X_32 = 0x82BB;
    const IMAGE_CLASS_4_X_16 = 0x82BC;
    const IMAGE_CLASS_2_X_16 = 0x82BD;
    const IMAGE_CLASS_1_X_16 = 0x82BE;
    const IMAGE_CLASS_4_X_8 = 0x82BF;
    const IMAGE_CLASS_2_X_8 = 0x82C0;
    const IMAGE_CLASS_1_X_8 = 0x82C1;
    const IMAGE_CLASS_11_11_10 = 0x82C2;
    const IMAGE_CLASS_10_10_10_2 = 0x82C3;
    const VIEW_CLASS_128_BITS = 0x82C4;
    const VIEW_CLASS_96_BITS = 0x82C5;
    const VIEW_CLASS_64_BITS = 0x82C6;
    const VIEW_CLASS_48_BITS = 0x82C7;
    const VIEW_CLASS_32_BITS = 0x82C8;
    const VIEW_CLASS_24_BITS = 0x82C9;
    const VIEW_CLASS_16_BITS = 0x82CA;
    const VIEW_CLASS_8_BITS = 0x82CB;
    const VIEW_CLASS_S3TC_DXT1_RGB = 0x82CC;
    const VIEW_CLASS_S3TC_DXT1_RGBA = 0x82CD;
    const VIEW_CLASS_S3TC_DXT3_RGBA = 0x82CE;
    const VIEW_CLASS_S3TC_DXT5_RGBA = 0x82CF;
    const VIEW_CLASS_RGTC1_RED = 0x82D0;
    const VIEW_CLASS_RGTC2_RG = 0x82D1;
    const VIEW_CLASS_BPTC_UNORM = 0x82D2;
    const VIEW_CLASS_BPTC_FLOAT = 0x82D3;

    const ARRAY_BUFFER = 0x8892;
    const STATIC_DRAW = 0x88E4;

    /*************************************************************/
    type GLdouble = number;
    type GLclampd = number;
    type GLbyte = number;
    type GLshort = number;
    type GLubyte = number;
    type GLushort = number;
    type GLvoid = number;

    function init(): GLenum;
    function accum(op: GLenum, value: GLfloat): void;
    function alphaFunc(func: GLenum, ref: GLclampf): void;
    function areTexturesResident(n: GLsizei , textures: GLuint[], residences: GLboolean[]): GLboolean;
    function arrayElement(i: GLint): void;
    function begin(mode: GLenum): void;
    function bindTexture(target: GLenum, texture: GLuint): void;
    function bitmap(width: GLsizei , height: GLsizei , xorig: GLfloat, yorig: GLfloat, xmove: GLfloat, ymove: GLfloat, bitmap: GLubyte[]): void;
    function blendFunc(sfactor: GLenum, dfactor: GLenum): void;
    function callList(list: GLuint): void;
    function callLists(n: GLsizei, type: GLenum, lists: GLvoid[]): void;
    function clear(mask: GLbitfield): void;
    function clearAccum(red: GLfloat, green: GLfloat, blue: GLfloat, alpha: GLfloat): void;
    function clearColor(red: GLclampf, green: GLclampf, blue: GLclampf, alpha: GLclampf): void;
    function clearDepth(depth: GLclampd): void;
    function clearIndex(c: GLfloat): void;
    function clearStencil(s: GLint): void;
    function clipPlane(plane: GLenum, equation: GLdouble[]): void;
    function color3b(red: GLbyte, green: GLbyte, blue: GLbyte): void;
    function color3bv(v: GLbyte[]): void;
    function color3d(red: GLdouble, green: GLdouble, blue: GLdouble): void;
    function color3dv(v: GLdouble[]): void;
    function color3f(red: GLfloat, green: GLfloat, blue: GLfloat): void;
    function color3fv(v: GLfloat[]): void;
    function color3i(red: GLint, green: GLint, blue: GLint): void;
    function color3iv(v: GLint[]): void;
    function color3s(red: GLshort, green: GLshort, blue: GLshort): void;
    function color3sv(v: GLshort): void;
    function color3ub(red: GLubyte, green: GLubyte, blue: GLubyte): void;
    function color3ubv(v: GLubyte): void;
    function color3ui(red: GLuint, green: GLuint, blue: GLuint): void;
    function color3uiv(v: GLuint[]): void;
    function color3us(red: GLushort, green: GLushort, blue: GLushort): void;
    function color3usv(v:GLushort[]): void;
    function color4b(red: GLbyte, green:GLbyte, blue:GLbyte, alpha: GLbyte): void;
    function color4bv(v: GLbyte[]): void;
    function color4d(red: GLdouble, green: GLdouble, blue: GLdouble, alpha: GLdouble): void;
    function color4dv(v: GLdouble[]): void;
    function color4f(red: GLfloat, green: GLfloat, blue: GLfloat, alpha: GLfloat): void;
    function color4fv(v: GLfloat[]): void;
    function color4i(red: GLint, green: GLint, blue: GLint, alpha: GLint): void;
    function color4iv(v: GLint[]): void;
    function color4s(red: GLshort, green: GLshort, blue: GLshort, alpha: GLshort): void;
    function color4sv(v: GLshort): void;
    function color4ub(red: GLubyte, green: GLubyte, blue: GLubyte, alpha: GLubyte): void;
    function color4ubv(v: GLubyte[]): void;
    function color4ui(red: GLuint, green: GLuint, blue: GLuint, alpha: GLuint): void;
    function color4uiv(v: GLuint[]): void;
    function color4us(red: GLushort, green: GLushort, blue: GLushort, alpha: GLushort): void;
    function color4usv(v: GLushort): void;
    function colorMask(red: GLboolean, green: GLboolean, blue: GLboolean, alpha: GLboolean): void;
    function colorMaterial(face:GLenum , mode:GLenum ): void;
    function colorPointer(size: GLint , type:GLenum , stride: GLsizei , pointer: []): void;
    function copyPixels(x: GLint , y: GLint , width: GLsizei , height: GLsizei , type:GLenum ): void;
    function copyTexImage1D(target:GLenum , level: GLint , internalFormat:GLenum , x: GLint , y: GLint , width: GLsizei , border: GLint ): void;
    function copyTexImage2D(target:GLenum , level: GLint , internalFormat:GLenum , x: GLint , y: GLint , width: GLsizei , height: GLsizei , border: GLint ): void;
    function copyTexSubImage1D(target:GLenum , level: GLint , xoffset: GLint , x: GLint , y: GLint , width: GLsizei ): void;
    function copyTexSubImage2D(target:GLenum , level: GLint , xoffset: GLint , yoffset: GLint , x: GLint , y: GLint , width: GLsizei , height: GLsizei ): void;
    function cullFace(mode:GLenum ): void;
    function deleteLists(list: GLuint , range: GLsizei ): void;
    function deleteTextures(n: GLsizei , textures: GLuint[]): void;
    function depthFunc(func:GLenum ): void;
    function depthMask(flag: GLboolean ): void;
    function depthRange(zNear: GLclampd , zFar: GLclampd ): void;
    function disable(cap:GLenum ): void;
    function disableClientState(array:GLenum ): void;
    function drawArrays(mode:GLenum , first: GLint , count: GLsizei ): void;
    function drawBuffer(mode:GLenum ): void;
    function drawElements(mode:GLenum , count: GLsizei , type:GLenum , indices: []): void;
    function drawPixels(width: GLsizei , height: GLsizei , format:GLenum , type:GLenum , pixels: []): void;
    function edgeFlag(flag: GLboolean ): void;
    function edgeFlagPointer(stride: GLsizei, pointer: GLvoid[]): void;
    function edgeFlagv(flag: GLboolean): void;
    function enable(cap: GLenum): void;
    function enableClientState(array: GLenum): void;
    function end(): void;
    function endList(): void;
    function evalCoord1d(u: GLdouble ): void;
    function evalCoord1dv(u: GLdouble[]): void;
    function evalCoord1f(u:GLfloat ): void;
    function evalCoord1fv(u: GLfloat[]): void;
    function evalCoord2d(u: GLdouble , v: GLdouble ): void;
    function evalCoord2dv(u: GLdouble[]): void;
    function evalCoord2f(u:GLfloat , v: GLfloat): void;
    function evalCoord2fv(u: GLfloat[]): void;
    function evalMesh1(mode:GLenum , i1: GLint , i2: GLint ): void;
    function evalMesh2(mode:GLenum , i1: GLint , i2: GLint , j1: GLint , j2: GLint ): void;
    function evalPoint1(i: GLint ): void;
    function evalPoint2(i: GLint , j: GLint ): void;
    function feedbackBuffer(size: GLsizei , type:GLenum , buffer: GLfloat[]): void;
    function finish(): void;
    function flush(): void;
    function fogf(pname:GLenum , param: GLfloat): void;
    function fogfv(pname:GLenum , params: GLfloat[]): void;
    function fogi(pname:GLenum , param: GLint ): void;
    function fogiv(pname:GLenum , params: GLint[] ): void;
    function frontFace(mode:GLenum ): void;
    function frustum(left: GLdouble, right: GLdouble, bottom: GLdouble, top: GLdouble, zNear: GLdouble , zFar: GLdouble ): void;
    function genLists(range: GLsizei ): GLuint;
    function genTextures(n: GLsizei , textures: GLuint[] ): void;
    function getBooleanv(pname:GLenum , params: GLboolean[]): void;
    function getClipPlane(plane:GLenum , equation: GLdouble[]): void;
    function getDoublev(pname:GLenum , params: GLdouble[]): void;
    function getError(): GLenum;
    function getFloatv(pname:GLenum ,params: GLfloat[]): void;
    function getIntegerv(pname:GLenum ,params: GLint[] ): void;
    function getLightfv(light:GLenum , pname:GLenum ,params: GLfloat[]): void;
    function getLightiv(light:GLenum , pname:GLenum ,params: GLint[] ): void;
    function getMapdv(target:GLenum , query:GLenum ,v: GLdouble[]): void;
    function getMapfv(target:GLenum , query:GLenum ,v: GLfloat[]): void;
    function getMapiv(target:GLenum , query:GLenum ,v: GLint[] ): void;
    function getMaterialfv(face:GLenum , pname:GLenum ,params: GLfloat[]): void;
    function getMaterialiv(face:GLenum , pname:GLenum ,params: GLint[]): void;
    function getPixelMapfv(map:GLenum , values: GLfloat[]): void;
    function getPixelMapuiv(map:GLenum , values: GLuint[] ): void;
    function getPixelMapusv(map:GLenum , values: GLushort[]): void;
    function getPointerv(pname:GLenum , params:[]): void;
    function getPolygonStipple(mask: GLubyte[]): void;
    function getString(name:GLenum ): string;
    function getTexEnvfv(target:GLenum , pname:GLenum ,params: GLfloat[]): void;
    function getTexEnviv(target:GLenum , pname:GLenum ,params: GLint[] ): void;
    function getTexGendv(coord:GLenum , pname:GLenum , params: GLdouble[]): void;
    function getTexGenfv(coord:GLenum , pname:GLenum ,params: GLfloat[]): void;
    function getTexGeniv(coord:GLenum , pname:GLenum ,params: GLint[] ): void;
    function getTexImage(target:GLenum , level: GLint , format:GLenum , type:GLenum , pixels: GLvoid[]): void;
    function getTexLevelParameterfv(target:GLenum , level: GLint , pname:GLenum ,params: GLfloat[]): void;
    function getTexLevelParameteriv(target:GLenum , level: GLint , pname:GLenum ,params: GLint[] ): void;
    function getTexParameterfv(target:GLenum , pname:GLenum ,params: GLfloat[]): void;
    function getTexParameteriv(target:GLenum , pname:GLenum ,params: GLint[] ): void;
    function hint(target:GLenum , mode:GLenum ): void;
    function indexMask(mask: GLuint ): void;
    function indexPointer(type:GLenum , stride: GLsizei , pointer: []): void;
    function indexd(c: GLdouble ): void;
    function indexdv(c: GLdouble[]): void;
    function indexf(c:GLfloat ): void;
    function indexfv(c: GLfloat[]): void;
    function indexi(c: GLint ): void;
    function indexiv(c: GLint[] ): void;
    function indexs(c: GLshort ): void;
    function indexsv(c: GLshort[]): void;
    function indexub(c: GLubyte): void;
    function indexubv(c: GLubyte[]): void;
    function initNames(): void;
    function interleavedArrays(format:GLenum , stride: GLsizei , pointer: []): void;
    function isEnabled(cap:GLenum ): GLboolean;
    function isList(list: GLuint ): GLboolean;
    function isTexture(texture: GLuint ): GLboolean;
    function lightModelf(pname:GLenum , param: GLfloat): void;
    function lightModelfv(pname:GLenum , params: GLfloat[]): void;
    function lightModeli(pname:GLenum , param: GLint ): void;
    function lightModeliv(pname:GLenum , params: GLint[] ): void;
    function lightf(light:GLenum , pname:GLenum , param: GLfloat): void;
    function lightfv(light:GLenum , pname:GLenum , params: GLfloat[] | Float32Array): void;
    function lighti(light:GLenum , pname:GLenum , param: GLint ): void;
    function lightiv(light:GLenum , pname:GLenum , params: GLint[] ): void;
    function lineStipple(factor: GLint , pattern: GLushort): void;
    function lineWidth(width:GLfloat ): void;
    function listBase(base: GLuint ): void;
    function loadIdentity(): void;
    function loadMatrixd(m: GLdouble[]): void;
    function loadMatrixf(m: GLfloat[]): void;
    function loadName(name: GLuint ): void;
    function logicOp(opcode:GLenum ): void;
    function map1d(target:GLenum , u1: GLdouble, u2: GLdouble, stride: GLint , order: GLint , points: GLdouble[]): void;
    function map1f(target:GLenum , u1: GLfloat, u2: GLfloat, stride: GLint , order: GLint , points: GLfloat[]): void;
    function map2d(target:GLenum , u1: GLdouble, u2: GLdouble, ustride: GLint , uorder: GLint , v1: GLdouble, v2: GLdouble, vstride: GLint , vorder: GLint , points: GLdouble[]): void;
    function map2f(target:GLenum , u1: GLfloat, u2: GLfloat, ustride: GLint , uorder: GLint , v1: GLfloat, v2: GLfloat, vstride: GLint , vorder: GLint , points: GLfloat[]): void;
    function mapGrid1d(un: GLint , u1: GLdouble, u2: GLdouble): void;
    function mapGrid1f(un: GLint , u1: GLfloat, u2: GLfloat): void;
    function mapGrid2d(un: GLint , u1: GLdouble, u2: GLdouble, vn: GLint , v1: GLdouble, v2: GLdouble): void;
    function mapGrid2f(un: GLint , u1: GLfloat, u2: GLfloat, vn: GLint , v1: GLfloat, v2: GLfloat): void;
    function materialf(face:GLenum , pname:GLenum , param: GLfloat): void;
    function materialfv(face:GLenum , pname:GLenum , params: GLfloat[] | Float32Array): void;
    function materiali(face:GLenum , pname:GLenum , param: GLint ): void;
    function materialiv(face:GLenum , pname:GLenum , params: GLint[] ): void;
    function matrixMode(mode: GLenum): void;
    function multMatrixd(m: GLdouble[]): void;
    function multMatrixf(m: GLfloat[]): void;
    function newList(list: GLuint , mode:GLenum ): void;
    function normal3b(nx: GLbyte, ny: GLbyte, nz: GLbyte): void;
    function normal3bv(v: GLbyte[]): void;
    function normal3d(nx: GLdouble, ny: GLdouble, nz: GLdouble): void;
    function normal3dv(v: GLdouble[]): void;
    function normal3f(nx:GLfloat , ny: GLfloat, nz: GLfloat): void;
    function normal3fv(v: GLfloat[]): void;
    function normal3i(nx: GLint , ny: GLint , nz: GLint ): void;
    function normal3iv(v: GLint[] ): void;
    function normal3s(nx: GLshort , ny: GLshort , nz: GLshort ): void;
    function normal3sv(v: GLshort[]): void;
    function normalPointer(type:GLenum , stride: GLsizei , pointer: []): void;
    function ortho(left: GLdouble, right: GLdouble, bottom: GLdouble,  top: GLdouble, zNear: GLdouble, zFar: GLdouble): void;
    function passThrough(token: GLfloat): void;
    function pixelMapfv(map:GLenum , mapsize: GLsizei , values: GLfloat[]): void;
    function pixelMapuiv(map:GLenum , mapsize: GLsizei , values: GLuint[]): void;
    function pixelMapusv(map:GLenum , mapsize: GLsizei , values: GLushort[]): void;
    function pixelStoref(pname:GLenum , param: GLfloat): void;
    function pixelStorei(pname:GLenum , param: GLint ): void;
    function pixelTransferf(pname:GLenum , param: GLfloat): void;
    function pixelTransferi(pname:GLenum , param: GLint ): void;
    function pixelZoom(xfactor:GLfloat , yfactor: GLfloat): void;
    function pointSize(size: GLfloat): void;
    function polygonMode(face:GLenum , mode:GLenum ): void;
    function polygonOffset(factor:GLfloat , units: GLfloat): void;
    function polygonStipple(mask: GLubyte[]): void;
    function popAttrib(): void;
    function popClientAttrib(): void;
    function popMatrix(): void;
    function popName(): void;
    function prioritizeTextures(n: GLsizei , textures: GLuint[], priorities: GLclampf[]): void;
    function pushAttrib(mask:GLbitfield ): void;
    function pushClientAttrib(mask:GLbitfield ): void;
    function pushMatrix(): void;
    function pushName(name: GLuint ): void;
    function rasterPos2d(x: GLdouble , y: GLdouble ): void;
    function rasterPos2dv(v: GLdouble[]): void;
    function rasterPos2f(x:GLfloat , y: GLfloat): void;
    function rasterPos2fv(v: GLfloat[]): void;
    function rasterPos2i(x: GLint , y: GLint ): void;
    function rasterPos2iv(v: GLint[] ): void;
    function rasterPos2s(x: GLshort , y: GLshort ): void;
    function rasterPos2sv(v: GLshort[]): void;
    function rasterPos3d(x: GLdouble , y: GLdouble , z: GLdouble ): void;
    function rasterPos3dv(v: GLdouble[]): void;
    function rasterPos3f(x:GLfloat , y: GLfloat, z: GLfloat): void;
    function rasterPos3fv(v: GLfloat[]): void;
    function rasterPos3i(x: GLint , y: GLint , z: GLint ): void;
    function rasterPos3iv(v: GLint[] ): void;
    function rasterPos3s(x: GLshort , y: GLshort , z: GLshort ): void;
    function rasterPos3sv(v: GLshort[]): void;
    function rasterPos4d(x: GLdouble , y: GLdouble , z: GLdouble , w: GLdouble ): void;
    function rasterPos4dv(v: GLdouble[]): void;
    function rasterPos4f(x:GLfloat , y: GLfloat, z: GLfloat, w: GLfloat): void;
    function rasterPos4fv(v: GLfloat[]): void;
    function rasterPos4i(x: GLint , y: GLint , z: GLint , w: GLint ): void;
    function rasterPos4iv(v: GLint[] ): void;
    function rasterPos4s(x: GLshort , y: GLshort , z: GLshort , w: GLshort ): void;
    function rasterPos4sv(v: GLshort[]): void;
    function readBuffer(mode:GLenum ): void;
    function readPixels(x: GLint , y: GLint , width: GLsizei , height: GLsizei , format:GLenum , type:GLenum , pixels: GLvoid[]): void;
    function rectd(x1: GLdouble, y1: GLdouble, x2: GLdouble, y2: GLdouble): void;
    function rectdv(v1: GLdouble[], v2: GLdouble[]): void;
    function rectf(x1:GLfloat , y1: GLfloat, x2: GLfloat, y2: GLfloat): void;
    function rectfv(v1: GLfloat[], v2: GLfloat[]): void;
    function recti(x1: GLint , y1: GLint , x2: GLint , y2: GLint ): void;
    function rectiv(v1: GLint[] , v2: GLint[]): void;
    function rects(x1: GLshort , y1: GLshort , x2: GLshort , y2: GLshort ): void;
    function rectsv(v1: GLshort[], v2: GLshort[]): void;
    function renderMode(mode: GLenum): GLint;
    function rotated(angle: GLdouble , x: GLdouble , y: GLdouble , z: GLdouble ): void;
    function rotatef(angle: GLfloat, x: GLfloat, y: GLfloat, z: GLfloat): void;
    function scaled(x: GLdouble , y: GLdouble , z: GLdouble ): void;
    function scalef(x:GLfloat , y: GLfloat, z: GLfloat): void;
    function scissor(x: GLint , y: GLint , width: GLsizei , height: GLsizei ): void;
    function selectBuffer(size: GLsizei , buffer: GLuint[] ): void;
    function shadeModel(mode:GLenum ): void;
    function stencilFunc(func:GLenum , ref: GLint , mask: GLuint ): void;
    function stencilMask(mask: GLuint ): void;
    function stencilOp(fail:GLenum , zfail:GLenum , zpass:GLenum ): void;
    function texCoord1d(s: GLdouble ): void;
    function texCoord1dv(v: GLdouble[]): void;
    function texCoord1f(s:GLfloat ): void;
    function texCoord1fv(v: GLfloat[]): void;
    function texCoord1i(s: GLint ): void;
    function texCoord1iv(v: GLint[] ): void;
    function texCoord1s(s: GLshort ): void;
    function texCoord1sv(v: GLshort[]): void;
    function texCoord2d(s: GLdouble , t: GLdouble ): void;
    function texCoord2dv(v: GLdouble[]): void;
    function texCoord2f(s:GLfloat , t: GLfloat): void;
    function texCoord2fv(v: GLfloat[]): void;
    function texCoord2i(s: GLint , t: GLint ): void;
    function texCoord2iv(v: GLint[] ): void;
    function texCoord2s(s: GLshort , t: GLshort ): void;
    function texCoord2sv(v: GLshort[]): void;
    function texCoord3d(s: GLdouble , t: GLdouble , r: GLdouble ): void;
    function texCoord3dv(v: GLdouble[]): void;
    function texCoord3f(s:GLfloat , t: GLfloat, r: GLfloat): void;
    function texCoord3fv(v: GLfloat[]): void;
    function texCoord3i(s: GLint , t: GLint , r: GLint ): void;
    function texCoord3iv(v: GLint[] ): void;
    function texCoord3s(s: GLshort , t: GLshort , r: GLshort ): void;
    function texCoord3sv(v: GLshort[]): void;
    function texCoord4d(s: GLdouble , t: GLdouble , r: GLdouble , q: GLdouble ): void;
    function texCoord4dv(v: GLdouble[]): void;
    function texCoord4f(s:GLfloat , t: GLfloat, r: GLfloat, q: GLfloat): void;
    function texCoord4fv(v: GLfloat[]): void;
    function texCoord4i(s: GLint , t: GLint , r: GLint , q: GLint ): void;
    function texCoord4iv(v: GLint[] ): void;
    function texCoord4s(s: GLshort , t: GLshort , r: GLshort , q: GLshort ): void;
    function texCoord4sv(v: GLshort[]): void;
    function texCoordPointer(size: GLint , type:GLenum , stride: GLsizei , pointer: []): void;
    function texEnvf(target:GLenum , pname:GLenum , param: GLfloat): void;
    function texEnvfv(target:GLenum , pname:GLenum , params: GLfloat[]): void;
    function texEnvi(target:GLenum , pname:GLenum , param: GLint ): void;
    function texEnviv(target:GLenum , pname:GLenum , params: GLint[] ): void;
    function texGend(coord:GLenum , pname:GLenum , param: GLdouble): void;
    function texGendv(coord:GLenum , pname:GLenum , params: GLdouble[]): void;
    function texGenf(coord:GLenum , pname:GLenum , param: GLfloat): void;
    function texGenfv(coord:GLenum , pname:GLenum , params: GLfloat[]): void;
    function texGeni(coord:GLenum , pname:GLenum , param: GLint ): void;
    function texGeniv(coord:GLenum , pname:GLenum , params: GLint[] ): void;
    function texImage1D(target:GLenum , level: GLint , internalformat: GLint , width: GLsizei , border: GLint , format:GLenum , type:GLenum , pixels: []): void;
    function texImage2D(target:GLenum , level: GLint , internalformat: GLint , width: GLsizei , height: GLsizei , border: GLint , format:GLenum , type:GLenum , pixels: []): void;
    function texParameterf(target:GLenum , pname:GLenum , param: GLfloat): void;
    function texParameterfv(target:GLenum , pname:GLenum , params: GLfloat[]): void;
    function texParameteri(target:GLenum , pname:GLenum , param: GLint ): void;
    function texParameteriv(target:GLenum , pname:GLenum , params: GLint[] ): void;
    function texSubImage1D(target:GLenum , level: GLint , xoffset: GLint , width: GLsizei , format:GLenum , type:GLenum , pixels: []): void;
    function texSubImage2D(target:GLenum , level: GLint , xoffset: GLint , yoffset: GLint , width: GLsizei , height: GLsizei , format:GLenum , type:GLenum , pixels: []): void;
    function translated(x: GLdouble , y: GLdouble , z: GLdouble ): void;
    function translatef(x: GLfloat, y: GLfloat, z: GLfloat): void;
    function vertex2d(x: GLdouble , y: GLdouble ): void;
    function vertex2dv(v: GLdouble[]): void;
    function vertex2f(x: GLfloat, y: GLfloat): void;
    function vertex2fv(v: GLfloat[]): void;
    function vertex2i(x: GLint , y: GLint ): void;
    function vertex2iv(v: GLint[] ): void;
    function vertex2s(x: GLshort , y: GLshort ): void;
    function vertex2sv(v: GLshort[]): void;
    function vertex3d(x: GLdouble , y: GLdouble , z: GLdouble ): void;
    function vertex3dv(v: GLdouble[]): void;
    function vertex3f(x: GLfloat, y: GLfloat, z: GLfloat): void;
    function vertex3fv(v: GLfloat[]): void;
    function vertex3i(x: GLint , y: GLint , z: GLint ): void;
    function vertex3iv(v: GLint[]): void;
    function vertex3s(x: GLshort , y: GLshort , z: GLshort ): void;
    function vertex3sv(v: GLshort[]): void;
    function vertex4d(x: GLdouble , y: GLdouble , z: GLdouble , w: GLdouble ): void;
    function vertex4dv(v: GLdouble[]): void;
    function vertex4f(x:GLfloat , y: GLfloat, z: GLfloat, w: GLfloat): void;
    function vertex4fv(v: GLfloat[]): void;
    function vertex4i(x: GLint , y: GLint , z: GLint , w: GLint ): void;
    function vertex4iv(v: GLint[]): void;
    function vertex4s(x: GLshort , y: GLshort , z: GLshort , w: GLshort ): void;
    function vertex4sv(v: GLshort[]): void;
    function vertexPointer(size: GLint , type:GLenum , stride: GLsizei , pointer: []): void;
    function viewport(x: GLint, y: GLint, width: GLsizei, height: GLsizei): void;

    // GLEW

    //function init(): GLenum;
    function isSupported(name: string): GLboolean;

    // GL_VERSION_1_2
    function copyTexSubImage3D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, zoffset: GLint , x: GLint, y: GLint, width: GLsizei, height: GLsizei): void;
    function drawRangeElements(mode: GLenum, start: GLuint, end: GLuint, count: GLsizei, type: GLenum, indices:[]): void;
    function texImage3D(target:GLenum , level:GLint , internalFormat:GLint , width:GLsizei , height:GLsizei , depth:GLsizei , border:GLint , format:GLenum , type:GLenum , pixels:[]): void;
    function texSubImage3D(target:GLenum , level:GLint , xoffset:GLint , yoffset:GLint , zoffset:GLint , width:GLsizei , height:GLsizei , depth:GLsizei , format:GLenum , type:GLenum , pixels:[]): void;



    // GL_VERSION_1_3
    function activeTexture(texture:GLenum ): void;
    function clientActiveTexture(texture:GLenum ): void;
    function compressedTexImage1D(target:GLenum ,level:GLint, internalformat:GLenum , width:GLsizei ,border:GLint, imageSize:GLsizei , data:[]): void;
    function compressedTexImage2D(target:GLenum ,level:GLint, internalformat:GLenum , width:GLsizei , height:GLsizei ,border:GLint, imageSize:GLsizei , data:[]): void;
    function compressedTexImage3D(target:GLenum ,level:GLint, internalformat:GLenum , width:GLsizei , height:GLsizei , depth:GLsizei ,border:GLint, imageSize:GLsizei , data:[]): void;
    function compressedTexSubImage1D(target:GLenum ,level:GLint,xoffset:GLint, width:GLsizei , format:GLenum , imageSize:GLsizei , data:[]): void;
    function compressedTexSubImage2D(target:GLenum ,level:GLint,xoffset:GLint,yoffset:GLint, width:GLsizei , height:GLsizei , format:GLenum , imageSize:GLsizei , data:[]): void;
    function compressedTexSubImage3D(target:GLenum ,level:GLint,xoffset:GLint,yoffset:GLint,zoffset:GLint, width:GLsizei , height:GLsizei , depth:GLsizei , format:GLenum , imageSize:GLsizei , data:[]): void;
    function getCompressedTexImage(target:GLenum ,lod:GLint,img:[]): void;
    function loadTransposeMatrixd(m:GLdouble[]): void;
    function loadTransposeMatrixf(m:GLfloat[]): void;
    function multTransposeMatrixd(m:GLdouble[]): void;
    function multTransposeMatrixf(m:GLfloat[]): void;
    function multiTexCoord1d(target:GLenum , s:GLdouble ): void;
    function multiTexCoord1dv(target:GLenum ,v:GLdouble[]): void;
    function multiTexCoord1f(target:GLenum , s:GLfloat ): void;
    function multiTexCoord1fv(target:GLenum ,v:GLfloat[]): void;
    function multiTexCoord1i(target:GLenum ,s:GLint): void;
    function multiTexCoord1iv(target:GLenum ,v:GLint[]): void;
    function multiTexCoord1s(target:GLenum , s:GLshort ): void;
    function multiTexCoord1sv(target:GLenum ,v:GLshort[]): void;
    function multiTexCoord2d(target:GLenum , s:GLdouble , t:GLdouble ): void;
    function multiTexCoord2dv(target:GLenum ,v:GLdouble[]): void;
    function multiTexCoord2f(target:GLenum , s:GLfloat , t:GLfloat ): void;
    function multiTexCoord2fv(target:GLenum ,v:GLfloat[]): void;
    function multiTexCoord2i(target:GLenum ,s:GLint,t:GLint): void;
    function multiTexCoord2iv(target:GLenum ,v:GLint[]): void;
    function multiTexCoord2s(target:GLenum , s:GLshort , t:GLshort ): void;
    function multiTexCoord2sv(target:GLenum ,v:GLshort[]): void;
    function multiTexCoord3d(target:GLenum , s:GLdouble , t:GLdouble , r:GLdouble ): void;
    function multiTexCoord3dv(target:GLenum ,v:GLdouble[]): void;
    function multiTexCoord3f(target:GLenum , s:GLfloat , t:GLfloat , r:GLfloat ): void;
    function multiTexCoord3fv(target:GLenum ,v:GLfloat[]): void;
    function multiTexCoord3i(target:GLenum ,s:GLint,t:GLint,r:GLint): void;
    function multiTexCoord3iv(target:GLenum ,v:GLint[]): void;
    function multiTexCoord3s(target:GLenum , s:GLshort , t:GLshort , r:GLshort ): void;
    function multiTexCoord3sv(target:GLenum ,v:GLshort[]): void;
    function multiTexCoord4d(target:GLenum , s:GLdouble , t:GLdouble , r:GLdouble , q:GLdouble ): void;
    function multiTexCoord4dv(target:GLenum ,v:GLdouble[]): void;
    function multiTexCoord4f(target:GLenum , s:GLfloat , t:GLfloat , r:GLfloat , q:GLfloat ): void;
    function multiTexCoord4fv(target:GLenum ,v:GLfloat[]): void;
    function multiTexCoord4i(target:GLenum ,s:GLint,t:GLint,r:GLint,q:GLint): void;
    function multiTexCoord4iv(target:GLenum ,v:GLint[]): void;
    function multiTexCoord4s(target:GLenum , s:GLshort , t:GLshort , r:GLshort , q:GLshort ): void;
    function multiTexCoord4sv(target:GLenum ,v:GLshort[]): void;
    function sampleCoverage(value:GLclampf, invert:GLboolean ): void;

    // GL_VERSION_1_4
    function blendColor(red:GLclampf, green:GLclampf, blue:GLclampf, alpha:GLclampf): void;
    function blendEquation(mode:GLenum ): void;
    function blendFuncSeparate(sfactorRGB:GLenum , dfactorRGB:GLenum , sfactorAlpha:GLenum , dfactorAlpha:GLenum ): void;
    function fogCoordPointer(type:GLenum , stride:GLsizei , pointer:[]): void;
    function fogCoordd(coord:GLdouble ): void;
    function fogCoorddv(coord:GLdouble[]): void;
    function fogCoordf(coord:GLfloat ): void;
    function fogCoordfv(coord:GLfloat[]): void;
    function multiDrawArrays(mode:GLenum ,first:GLint[], count:GLsizei[], drawcount:GLsizei ): void;
    function multiDrawElements(mode:GLenum , count:GLsizei[], type:GLenum , indices: [], drawcount:GLsizei ): void;
    function pointParameterf(pname:GLenum , param:GLfloat ): void;
    function pointParameterfv(pname:GLenum ,params:GLfloat[]): void;
    function pointParameteri(pname:GLenum ,param:GLint): void;
    function pointParameteriv(pname:GLenum ,params:GLint[]): void;
    function secondaryColor3b(red:GLbyte, green:GLbyte, blue:GLbyte): void;
    function secondaryColor3bv(v:GLbyte[]): void;
    function secondaryColor3d(red:GLdouble , green:GLdouble , blue:GLdouble ): void;
    function secondaryColor3dv(v:GLdouble[]): void;
    function secondaryColor3f(red:GLfloat , green:GLfloat , blue:GLfloat ): void;
    function secondaryColor3fv(v:GLfloat[]): void;
    function secondaryColor3i(red:GLint ,green:GLint,blue:GLint): void;
    function secondaryColor3iv(v:GLint[]): void;
    function secondaryColor3s(red:GLshort , green:GLshort , blue:GLshort ): void;
    function secondaryColor3sv(v:GLshort[]): void;
    function secondaryColor3ub(red:GLubyte , green:GLubyte , blue:GLubyte ): void;
    function secondaryColor3ubv(v: GLubyte[]): void;
    function secondaryColor3ui(red:GLuint , green:GLuint , blue:GLuint ): void;
    function secondaryColor3uiv(v:GLuint[]): void;
    function secondaryColor3us(red: GLushort, green: GLushort, blue: GLushort): void;
    function secondaryColor3usv(v:GLushort[]): void;
    function secondaryColorPointer(size:GLint , type:GLenum , stride:GLsizei , pointer:[]): void;
    function windowPos2d(x:GLdouble , y:GLdouble ): void;
    function windowPos2dv(p:GLdouble[]): void;
    function windowPos2f(x:GLfloat , y:GLfloat ): void;
    function windowPos2fv(p:GLfloat[]): void;
    function windowPos2i(x:GLint ,y:GLint): void;
    function windowPos2iv(p:GLint[]): void;
    function windowPos2s(x:GLshort , y:GLshort ): void;
    function windowPos2sv(p:GLshort[]): void;
    function windowPos3d(x:GLdouble , y:GLdouble , z:GLdouble ): void;
    function windowPos3dv(p:GLdouble[]): void;
    function windowPos3f(x:GLfloat , y:GLfloat , z:GLfloat ): void;
    function windowPos3fv(p:GLfloat[]): void;
    function windowPos3i(x:GLint ,y:GLint,z:GLint): void;
    function windowPos3iv(p:GLint[]): void;
    function windowPos3s(x:GLshort , y:GLshort , z:GLshort ): void;
    function windowPos3sv(p:GLshort[]): void;

    // GL_VERSION_1_5
    function beginQuery(target:GLenum , id:GLuint ): void;
    function bindBuffer(target:GLenum , buffer:GLuint ): void;
    function bufferData(target:GLenum , size:GLsizeiptr , data:[], usage:GLenum ): void;
    function bufferSubData(target:GLenum , offset:GLintptr , size:GLsizeiptr , data:[]): void;
    function deleteBuffers(n:GLsizei , buffers: GLuint[]): void;
    function deleteQueries(n:GLsizei , ids: GLuint[]): void;
    function endQuery(target:GLenum ): void;
    function genBuffers(n:GLsizei): number;
    function genVertexArrays(n:GLsizei): number;
    function bindVertexArray(n:GLsizei): void;
    function bufferData(target:GLenum , size:GLsizeiptr , data:any, usage:GLenum ): void;
    function genQueries(n:GLsizei , ids: GLuint[]): void;
    function getBufferParameteriv(target:GLenum , pname:GLenum , params: GLint[]): void;
    function getBufferPointerv(target:GLenum , pname:GLenum , params:void[]): void;
    function getBufferSubData(target:GLenum , offset:GLintptr , size:GLsizeiptr , data:[]): void;
    function getQueryObjectiv(id:GLuint , pname:GLenum , params: GLint[]): void;
    function getQueryObjectuiv(id:GLuint , pname:GLenum , params: GLuint[]): void;
    function getQueryiv(target:GLenum , pname:GLenum , params: GLint[]): void;
    function isBuffer(buffer:GLuint ): GLboolean;
    function isQuery(id:GLuint ): GLboolean;
    function mapBuffer(target:GLenum , access:GLenum ): [];
    function unmapBuffer(target:GLenum ): GLboolean;

    // GL_VERSION_2_0
    function attachShader(program:GLuint , shader:GLuint ): void;
    function bindAttribLocation(program:GLuint , index:GLuint , name: string): void;
    function blendEquationSeparate(modeRGB:GLenum , modeAlpha:GLenum ): void;
    function compileShader(shader:GLuint ): void;
    function createProgram(): GLuint;
    function createShader(type:GLenum ): GLuint;
    function deleteProgram(program:GLuint ): void;
    function deleteShader(shader:GLuint ): void;
    function detachShader(program:GLuint , shader:GLuint ): void;
    function disableVertexAttribArray(index:GLuint ): void;
    function drawBuffers(n:GLsizei , bufs:GLenum[]): void;
    function enableVertexAttribArray(index:GLuint ): void;
    function getActiveAttrib(program:GLuint , index:GLuint , maxLength:GLsizei , length: GLsizei[], size: GLint[], type: GLenum[], name: string): void;
    function getActiveUniform(program:GLuint , index:GLuint , maxLength:GLsizei , length: GLsizei[], size: GLint[], type: GLenum[], name: string): void;
    function getAttachedShaders(program:GLuint , maxCount:GLsizei , count: GLsizei[], shaders: GLuint[]): void;
    function getAttribLocation(program:GLuint , name: string): GLint;
    function getProgramInfoLog(program:GLuint , bufSize:GLsizei , length: GLsizei[], infoLog: string): void;
    function getProgramiv(program:GLuint , pname:GLenum , param): GLint[];
    function getShaderInfoLog(shader:GLuint , bufSize:GLsizei): [GLsizei, string];
    function getShaderSource(obj:GLuint , maxLength:GLsizei , length: GLsizei[], source: string): void;
    function getShaderiv(shader:GLuint , pname:GLenum): GLint[];
    function getUniformLocation(program:GLuint , name: string): GLint;
    function getUniformfv(program:GLuint ,location:GLint, params:GLfloat[]): void;
    function getUniformiv(program:GLuint ,location:GLint, params: GLint[]): void;
    function getVertexAttribPointerv(index:GLuint , pname:GLenum , pointer:[]): void;
    function getVertexAttribdv(index:GLuint , pname:GLenum , params:GLdouble[]): void;
    function getVertexAttribfv(index:GLuint , pname:GLenum , params:GLfloat[]): void;
    function getVertexAttribiv(index:GLuint , pname:GLenum , params: GLint[]): void;
    function isProgram(program:GLuint ): GLboolean;
    function isShader(shader:GLuint ): GLboolean;
    function linkProgram(program:GLuint ): void;
    function shaderSource(shader:GLuint , src: string): void;
    //function shaderSource(shader:GLuint , count:GLsizei , src: string, length:GLint[]): void;
    function stencilFuncSeparate(frontfunc:GLenum , backfunc:GLenum ,ref:GLint, mask:GLuint ): void;
    function stencilMaskSeparate(face:GLenum , mask:GLuint ): void;
    function stencilOpSeparate(face:GLenum , sfail:GLenum , dpfail:GLenum , dppass:GLenum ): void;
    function uniform1f(location:GLint , v0:GLfloat ): void;
    function uniform1fv(location:GLint , count:GLsizei , value:GLfloat[]): void;
    function uniform1i(location:GLint ,v0:GLint): void;
    function uniform1iv(location:GLint , count:GLsizei , value:GLint[]): void;
    function uniform2f(location:GLint , v0:GLfloat , v1:GLfloat ): void;
    function uniform2fv(location:GLint , count:GLsizei , value:GLfloat[]): void;
    function uniform2i(location:GLint ,v0:GLint,v1:GLint): void;
    function uniform2iv(location:GLint , count:GLsizei , value:GLint[]): void;
    function uniform3f(location:GLint , v0:GLfloat , v1:GLfloat , v2:GLfloat ): void;
    function uniform3fv(location:GLint , count:GLsizei , value:GLfloat[]): void;
    function uniform3i(location:GLint ,v0:GLint,v1:GLint,v2:GLint): void;
    function uniform3iv(location:GLint , count:GLsizei , value:GLint[]): void;
    function uniform4f(location:GLint , v0:GLfloat , v1:GLfloat , v2:GLfloat , v3:GLfloat ): void;
    function uniform4fv(location:GLint , count:GLsizei , value:GLfloat[]): void;
    function uniform4i(location:GLint ,v0:GLint,v1:GLint,v2:GLint,v3:GLint): void;
    function uniform4iv(location:GLint , count:GLsizei , value:GLint[]): void;
    function uniformMatrix2fv(location:GLint , count:GLsizei , transpose:GLboolean , value:GLfloat[]): void;
    function uniformMatrix3fv(location:GLint , count:GLsizei , transpose:GLboolean , value:GLfloat[]): void;
    function uniformMatrix4fv(location:GLint , count:GLsizei , transpose:GLboolean , value:GLfloat[]): void;
    function useProgram(program:GLuint ): void;
    function validateProgram(program:GLuint ): void;
    function vertexAttrib1d(index:GLuint , x:GLdouble ): void;
    function vertexAttrib1dv(index:GLuint , v:GLdouble[]): void;
    function vertexAttrib1f(index:GLuint , x:GLfloat ): void;
    function vertexAttrib1fv(index:GLuint , v:GLfloat[]): void;
    function vertexAttrib1s(index:GLuint , x:GLshort ): void;
    function vertexAttrib1sv(index:GLuint , v:GLshort[]): void;
    function vertexAttrib2d(index:GLuint , x:GLdouble , y:GLdouble ): void;
    function vertexAttrib2dv(index:GLuint , v:GLdouble[]): void;
    function vertexAttrib2f(index:GLuint , x:GLfloat , y:GLfloat ): void;
    function vertexAttrib2fv(index:GLuint , v:GLfloat[]): void;
    function vertexAttrib2s(index:GLuint , x:GLshort , y:GLshort ): void;
    function vertexAttrib2sv(index:GLuint , v:GLshort[]): void;
    function vertexAttrib3d(index:GLuint , x:GLdouble , y:GLdouble , z:GLdouble ): void;
    function vertexAttrib3dv(index:GLuint , v:GLdouble[]): void;
    function vertexAttrib3f(index:GLuint , x:GLfloat , y:GLfloat , z:GLfloat ): void;
    function vertexAttrib3fv(index:GLuint , v:GLfloat[]): void;
    function vertexAttrib3s(index:GLuint , x:GLshort , y:GLshort , z:GLshort ): void;
    function vertexAttrib3sv(index:GLuint , v:GLshort[]): void;
    function vertexAttrib4Nbv(index:GLuint , v:GLbyte[]): void;
    function vertexAttrib4Niv(index:GLuint , v:GLint[]): void;
    function vertexAttrib4Nsv(index:GLuint , v:GLshort[]): void;
    function vertexAttrib4Nub(index:GLuint , x:GLubyte , y:GLubyte , z:GLubyte , w:GLubyte ): void;
    function vertexAttrib4Nubv(index:GLuint , v:GLubyte[]): void;
    function vertexAttrib4Nuiv(index:GLuint , v: GLuint[]): void;
    function vertexAttrib4Nusv(index:GLuint , v:GLushort[]): void;
    function vertexAttrib4bv(index:GLuint , v:GLbyte[]): void;
    function vertexAttrib4d(index:GLuint , x:GLdouble , y:GLdouble , z:GLdouble , w:GLdouble ): void;
    function vertexAttrib4dv(index:GLuint , v:GLdouble[]): void;
    function vertexAttrib4f(index:GLuint , x:GLfloat , y:GLfloat , z:GLfloat , w:GLfloat ): void;
    function vertexAttrib4fv(index:GLuint , v:GLfloat[]): void;
    function vertexAttrib4iv(index:GLuint , v:GLint[]): void;
    function vertexAttrib4s(index:GLuint , x:GLshort , y:GLshort , z:GLshort , w:GLshort ): void;
    function vertexAttrib4sv(index:GLuint , v:GLshort[]): void;
    function vertexAttrib4ubv(index:GLuint , v:GLubyte[]): void;
    function vertexAttrib4uiv(index:GLuint , v: GLuint[]): void;
    function vertexAttrib4usv(index:GLuint , v:GLushort[]): void;
    function vertexAttribPointer(index:GLuint ,size:GLint, type:GLenum , normalized:GLboolean , stride:GLsizei): void;

    // GL_VERSION_2_1
    function uniformMatrix2x3fv(location:GLint , count:GLsizei , transpose:GLboolean ,value:GLfloat[]): void;
    function uniformMatrix2x4fv(location:GLint , count:GLsizei , transpose:GLboolean ,value:GLfloat[]): void;
    function uniformMatrix3x2fv(location:GLint , count:GLsizei , transpose:GLboolean ,value:GLfloat[]): void;
    function uniformMatrix3x4fv(location:GLint , count:GLsizei , transpose:GLboolean ,value:GLfloat[]): void;
    function uniformMatrix4x2fv(location:GLint , count:GLsizei , transpose:GLboolean ,value:GLfloat[]): void;
    function uniformMatrix4x3fv(location:GLint , count:GLsizei , transpose:GLboolean ,value:GLfloat[]): void;

    //GL_VERSION_3_0
    function beginConditionalRender(id:GLuint , mode:GLenum ): void;
    function beginTransformFeedback(primitiveMode:GLenum ): void;
    function bindFragDataLocation(program:GLuint , colorNumber:GLuint , name: string): void;
    function clampColor(target:GLenum , clamp:GLenum ): void;
    function clearBufferfi(buffer:GLenum ,drawBuffer:GLint, depth:GLfloat ,stencil:GLint): void;
    function clearBufferfv(buffer:GLenum ,drawBuffer:GLint, value:GLfloat[]): void;
    function clearBufferiv(buffer:GLenum ,drawBuffer:GLint, value:GLint[]): void;
    function clearBufferuiv(buffer:GLenum ,drawBuffer:GLint, value: GLuint[]): void;
    function colorMaski(buf:GLuint , red:GLboolean , green:GLboolean , blue:GLboolean , alpha:GLboolean ): void;
    function disablei(cap:GLenum , index:GLuint ): void;
    function enablei(cap:GLenum , index:GLuint ): void;
    function endConditionalRender(): void;
    function endTransformFeedback(): void;
    function getBooleani_v(pname:GLenum , index:GLuint , data:GLboolean[]): void;
    function getFragDataLocation(program:GLuint , name: string): GLint;
    function getStringi(name:GLenum , index:GLuint ): GLubyte[];
    function getTexParameterIiv(target:GLenum , pname:GLenum , params: GLint[]): void;
    function getTexParameterIuiv(target:GLenum , pname:GLenum , params: GLuint[]): void;
    function getTransformFeedbackVarying(program:GLuint , index:GLuint , bufSize:GLsizei , length:GLsizei[], size:GLsizei[], type:GLenum[], name: string): void;
    function getUniformuiv(program:GLuint ,location:GLint, params: GLuint[]): void;
    function getVertexAttribIiv(index:GLuint , pname:GLenum , params: GLint[]): void;
    function getVertexAttribIuiv(index:GLuint , pname:GLenum , params: GLuint[]): void;
    function isEnabledi(cap:GLenum , index:GLuint ): void;
    function texParameterIiv(target:GLenum , pname:GLenum , params:GLint[]): void;
    function texParameterIuiv(target:GLenum , pname:GLenum , params: GLuint[]): void;
    function transformFeedbackVaryings(program:GLuint , count:GLsizei , varyings:string[], bufferMode:GLenum ): void;
    function uniform1ui(location:GLint , v0:GLuint ): void;
    function uniform1uiv(location:GLint , count:GLsizei , value: GLuint[]): void;
    function uniform2ui(location:GLint , v0:GLuint , v1:GLuint ): void;
    function uniform2uiv(location:GLint , count:GLsizei , value: GLuint[]): void;
    function uniform3ui(location:GLint , v0:GLuint , v1:GLuint , v2:GLuint ): void;
    function uniform3uiv(location:GLint , count:GLsizei , value: GLuint[]): void;
    function uniform4ui(location:GLint , v0:GLuint , v1:GLuint , v2:GLuint , v3:GLuint ): void;
    function uniform4uiv(location:GLint , count:GLsizei , value: GLuint[]): void;
    function vertexAttribI1i(index:GLuint ,v0:GLint): void;
    function vertexAttribI1iv(index:GLuint , v0:GLint[]): void;
    function vertexAttribI1ui(index:GLuint , v0:GLuint ): void;
    function vertexAttribI1uiv(index:GLuint , v0: GLuint[]): void;
    function vertexAttribI2i(index:GLuint ,v0:GLint,v1:GLint): void;
    function vertexAttribI2iv(index:GLuint , v0:GLint[]): void;
    function vertexAttribI2ui(index:GLuint , v0:GLuint , v1:GLuint ): void;
    function vertexAttribI2uiv(index:GLuint , v0: GLuint[]): void;
    function vertexAttribI3i(index:GLuint ,v0:GLint,v1:GLint,v2:GLint): void;
    function vertexAttribI3iv(index:GLuint , v0:GLint[]): void;
    function vertexAttribI3ui(index:GLuint , v0:GLuint , v1:GLuint , v2:GLuint ): void;
    function vertexAttribI3uiv(index:GLuint , v0: GLuint[]): void;
    function vertexAttribI4bv(index:GLuint , v0:GLbyte[]): void;
    function vertexAttribI4i(index:GLuint ,v0:GLint,v1:GLint,v2:GLint,v3:GLint): void;
    function vertexAttribI4iv(index:GLuint , v0:GLint[]): void;
    function vertexAttribI4sv(index:GLuint , v0:GLshort[]): void;
    function vertexAttribI4ubv(index:GLuint , v0:GLubyte[]): void;
    function vertexAttribI4ui(index:GLuint , v0:GLuint , v1:GLuint , v2:GLuint , v3:GLuint ): void;
    function vertexAttribI4uiv(index:GLuint , v0: GLuint[]): void;
    function vertexAttribI4usv(index:GLuint , v0:GLushort[]): void;
    function vertexAttribIPointer(index:GLuint ,size:GLint, type:GLenum , stride:GLsizei , pointer: any): void;

    //GL_VERSION_3_1
    function drawArraysInstanced(mode:GLenum ,first:GLint, count:GLsizei , primcount:GLsizei ): void;
    function drawElementsInstanced(mode:GLenum , count:GLsizei , type:GLenum , indices:[], primcount:GLsizei ): void;
    function primitiveRestartIndex(buffer:GLuint ): void;
    function texBuffer(target:GLenum , internalFormat:GLenum , buffer:GLuint ): void;

    //GL_VERSION_3_2
    function framebufferTexture(target:GLenum , attachment:GLenum , texture:GLuint ,level:GLint): void;
    function getBufferParameteri64v(target:GLenum , value:GLenum , data: GLint64[]): void;
    function getInteger64i_v(pname:GLenum , index:GLuint , data:GLint64[]): void;

    //GL_VERSION_3_3
    function vertexAttribDivisor (index:GLuint , divisor:GLuint ): void;

    //GL_VERSION_4_0
    function blendEquationSeparatei(buf:GLuint , modeRGB:GLenum , modeAlpha:GLenum ): void;
    function blendEquationi(buf:GLuint , mode:GLenum ): void;
    function blendFuncSeparatei(buf:GLuint , srcRGB:GLenum , dstRGB:GLenum , srcAlpha:GLenum , dstAlpha:GLenum ): void;
    function blendFunci(buf:GLuint , src:GLenum , dst:GLenum ): void;
    function minSampleShading(value:GLclampf): void;

    //GL_VERSION_4_5
    function getGraphicsResetStatus(): GLenum;
    function getnCompressedTexImage(target:GLenum ,lod:GLint, bufSize:GLsizei , pixels:GLvoid[]): void;
    function getnTexImage(tex:GLenum ,level:GLint, format:GLenum , type:GLenum , bufSize:GLsizei , pixels:GLvoid[]): void;
    function getnUniformdv(program:GLuint ,location:GLint, bufSize:GLsizei , params: GLdouble[]): void;

    //GL_VERSION_4_6
    function multiDrawArraysIndirectCount(mode:GLenum , indirect: [], drawcount:GLintptr , maxdrawcount:GLsizei , stride:GLsizei ): void;
    function multiDrawElementsIndirectCount(mode:GLenum , type:GLenum , indirect: [], drawcount:GLintptr , maxdrawcount:GLsizei , stride:GLsizei ): void;
    function specializeShader(shader:GLuint , pEntryPoint: string, numSpecializationConstants:GLuint , pConstantIndex:GLuint[], pConstantValue:GLuint[]): void;

  }
  export default GL;
}
