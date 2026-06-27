bool sub_6F7D4740()
{
  PROC v0; // esi@1
  PROC v1; // edi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  PROC v6; // esi@10
  PROC v7; // esi@12
  PROC v8; // esi@14
  PROC v9; // esi@16
  PROC v10; // esi@18
  PROC v11; // esi@20
  PROC v12; // esi@22
  PROC v13; // esi@24
  PROC v14; // esi@26
  PROC v15; // esi@28
  PROC v16; // esi@30
  PROC v17; // esi@32
  PROC v18; // esi@34
  PROC v19; // esi@36
  PROC v20; // esi@38
  PROC v21; // esi@40
  PROC v22; // esi@42
  PROC v23; // esi@44
  PROC v24; // esi@46
  PROC v25; // esi@48
  PROC v26; // esi@50
  PROC v27; // esi@52
  PROC v28; // esi@54
  PROC v29; // esi@56
  PROC v30; // esi@58
  PROC v31; // esi@60
  PROC v32; // esi@62
  PROC v33; // eax@64
  PROC v34; // esi@64
  PROC v35; // eax@64
  int v37; // [sp+18h] [bp-94h]@1
  int v38; // [sp+1Ch] [bp-90h]@1
  int v39; // [sp+20h] [bp-8Ch]@1
  int v40; // [sp+24h] [bp-88h]@1
  int v41; // [sp+28h] [bp-84h]@1
  int v42; // [sp+2Ch] [bp-80h]@1
  int v43; // [sp+30h] [bp-7Ch]@1
  int v44; // [sp+34h] [bp-78h]@1
  int v45; // [sp+38h] [bp-74h]@1
  int v46; // [sp+3Ch] [bp-70h]@1
  int v47; // [sp+40h] [bp-6Ch]@1
  int v48; // [sp+44h] [bp-68h]@1
  int v49; // [sp+48h] [bp-64h]@1
  int v50; // [sp+4Ch] [bp-60h]@1
  int v51; // [sp+50h] [bp-5Ch]@1
  int v52; // [sp+54h] [bp-58h]@1
  int v53; // [sp+58h] [bp-54h]@1
  int v54; // [sp+5Ch] [bp-50h]@1
  int v55; // [sp+60h] [bp-4Ch]@1
  int v56; // [sp+64h] [bp-48h]@1
  int v57; // [sp+68h] [bp-44h]@1
  int v58; // [sp+6Ch] [bp-40h]@1
  int v59; // [sp+70h] [bp-3Ch]@1
  int v60; // [sp+74h] [bp-38h]@1
  int v61; // [sp+78h] [bp-34h]@1
  int v62; // [sp+7Ch] [bp-30h]@1
  int v63; // [sp+80h] [bp-2Ch]@1
  int v64; // [sp+84h] [bp-28h]@1
  int v65; // [sp+88h] [bp-24h]@1
  int v66; // [sp+8Ch] [bp-20h]@1

  dword_70371D50 = (int)wglGetProcAddress("glBindTextureUnit");
  v66 = dword_70371D50;
  dword_70371D4C = (int)wglGetProcAddress("glBlitNamedFramebuffer");
  v37 = dword_70371D4C;
  dword_70371D48 = (int)wglGetProcAddress("glCheckNamedFramebufferStatus");
  v38 = dword_70371D48;
  dword_70371D44 = (int)wglGetProcAddress("glClearNamedBufferData");
  v39 = dword_70371D44;
  dword_70371D40 = (int)wglGetProcAddress("glClearNamedBufferSubData");
  v40 = dword_70371D40;
  dword_70371D3C = (int)wglGetProcAddress("glClearNamedFramebufferfi");
  v41 = dword_70371D3C;
  dword_70371D38 = (int)wglGetProcAddress("glClearNamedFramebufferfv");
  v42 = dword_70371D38;
  dword_70371D34 = (int)wglGetProcAddress("glClearNamedFramebufferiv");
  v43 = dword_70371D34;
  dword_70371D30 = (int)wglGetProcAddress("glClearNamedFramebufferuiv");
  v44 = dword_70371D30;
  dword_70371D2C = (int)wglGetProcAddress("glCompressedTextureSubImage1D");
  v45 = dword_70371D2C;
  dword_70371D28 = (int)wglGetProcAddress("glCompressedTextureSubImage2D");
  v46 = dword_70371D28;
  dword_70371D24 = (int)wglGetProcAddress("glCompressedTextureSubImage3D");
  v47 = dword_70371D24;
  dword_70371D20 = (int)wglGetProcAddress("glCopyNamedBufferSubData");
  v48 = dword_70371D20;
  dword_70371D1C = (int)wglGetProcAddress("glCopyTextureSubImage1D");
  v49 = dword_70371D1C;
  dword_70371D18 = (int)wglGetProcAddress("glCopyTextureSubImage2D");
  v50 = dword_70371D18;
  dword_70371D14 = (int)wglGetProcAddress("glCopyTextureSubImage3D");
  v51 = dword_70371D14;
  dword_70371D10 = (int)wglGetProcAddress("glCreateBuffers");
  v52 = dword_70371D10;
  dword_70371D0C = (int)wglGetProcAddress("glCreateFramebuffers");
  v53 = dword_70371D0C;
  dword_70371D08 = (int)wglGetProcAddress("glCreateProgramPipelines");
  v54 = dword_70371D08;
  dword_70371D04 = (int)wglGetProcAddress("glCreateQueries");
  v55 = dword_70371D04;
  dword_70371D00 = (int)wglGetProcAddress("glCreateRenderbuffers");
  v56 = dword_70371D00;
  dword_70371CFC = (int)wglGetProcAddress("glCreateSamplers");
  v57 = dword_70371CFC;
  dword_70371CF8 = (int)wglGetProcAddress("glCreateTextures");
  v58 = dword_70371CF8;
  dword_70371CF4 = (int)wglGetProcAddress("glCreateTransformFeedbacks");
  v59 = dword_70371CF4;
  dword_70371CF0 = (int)wglGetProcAddress("glCreateVertexArrays");
  v60 = dword_70371CF0;
  dword_70371CEC = (int)wglGetProcAddress("glDisableVertexArrayAttrib");
  v61 = dword_70371CEC;
  dword_70371CE8 = (int)wglGetProcAddress("glEnableVertexArrayAttrib");
  v62 = dword_70371CE8;
  dword_70371CE4 = (int)wglGetProcAddress("glFlushMappedNamedBufferRange");
  v63 = dword_70371CE4;
  v0 = wglGetProcAddress("glGenerateTextureMipmap");
  dword_70371CE0 = (int)v0;
  v1 = wglGetProcAddress("glGetCompressedTextureImage");
  dword_70371CDC = (int)v1;
  v2 = wglGetProcAddress("glGetNamedBufferParameteri64v");
  dword_70371CD8 = (int)v2;
  dword_70371CD4 = (int)wglGetProcAddress("glGetNamedBufferParameteriv");
  v65 = dword_70371CD4;
  dword_70371CD0 = (int)wglGetProcAddress("glGetNamedBufferPointerv");
  v64 = dword_70371CD0;
  dword_70371CCC = (int)wglGetProcAddress("glGetNamedBufferSubData");
  if ( !dword_70371CCC
    || v37 == 0
    || v38 == 0
    || v39 == 0
    || v40 == 0
    || v42 == 0
    || v43 == 0
    || v44 == 0
    || v45 == 0
    || v46 == 0
    || v47 == 0
    || v48 == 0
    || v49 == 0
    || v50 == 0
    || v51 == 0
    || v52 == 0
    || v53 == 0
    || v54 == 0
    || v55 == 0
    || v56 == 0
    || v57 == 0
    || v58 == 0
    || v59 == 0
    || v60 == 0
    || v61 == 0
    || v62 == 0
    || v63 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v65 == 0
    || v64 == 0
    || v41 == 0
    || !v66 )
  {
    dword_70371CC8 = (int)wglGetProcAddress("glGetNamedFramebufferAttachmentParameteriv");
    dword_70371CC4 = (int)wglGetProcAddress("glGetNamedFramebufferParameteriv");
LABEL_68:
    dword_70371CC0 = (int)wglGetProcAddress("glGetNamedRenderbufferParameteriv");
    dword_70371CBC = (int)wglGetProcAddress("glGetQueryBufferObjecti64v");
LABEL_69:
    dword_70371CB8 = (int)wglGetProcAddress("glGetQueryBufferObjectiv");
    dword_70371CB4 = (int)wglGetProcAddress("glGetQueryBufferObjectui64v");
LABEL_70:
    dword_70371CB0 = (int)wglGetProcAddress("glGetQueryBufferObjectuiv");
    dword_70371CAC = (int)wglGetProcAddress("glGetTextureImage");
LABEL_71:
    dword_70371CA8 = (int)wglGetProcAddress("glGetTextureLevelParameterfv");
    dword_70371CA4 = (int)wglGetProcAddress("glGetTextureLevelParameteriv");
LABEL_72:
    dword_70371CA0 = (int)wglGetProcAddress("glGetTextureParameterIiv");
    dword_70371C9C = (int)wglGetProcAddress("glGetTextureParameterIuiv");
LABEL_73:
    dword_70371C98 = (int)wglGetProcAddress("glGetTextureParameterfv");
    dword_70371C94 = (int)wglGetProcAddress("glGetTextureParameteriv");
LABEL_74:
    dword_70371C90 = (int)wglGetProcAddress("glGetTransformFeedbacki64_v");
    dword_70371C8C = (int)wglGetProcAddress("glGetTransformFeedbacki_v");
LABEL_75:
    dword_70371C88 = (int)wglGetProcAddress("glGetTransformFeedbackiv");
    dword_70371C84 = (int)wglGetProcAddress("glGetVertexArrayIndexed64iv");
LABEL_76:
    dword_70371C80 = (int)wglGetProcAddress("glGetVertexArrayIndexediv");
    dword_70371C7C = (int)wglGetProcAddress("glGetVertexArrayiv");
LABEL_77:
    dword_70371C78 = (int)wglGetProcAddress("glInvalidateNamedFramebufferData");
    dword_70371C74 = (int)wglGetProcAddress("glInvalidateNamedFramebufferSubData");
LABEL_78:
    dword_70371C70 = (int)wglGetProcAddress("glMapNamedBuffer");
    dword_70371C6C = (int)wglGetProcAddress("glMapNamedBufferRange");
LABEL_79:
    dword_70371C68 = (int)wglGetProcAddress("glNamedBufferData");
    dword_70371C64 = (int)wglGetProcAddress("glNamedBufferStorage");
LABEL_80:
    dword_70371C60 = (int)wglGetProcAddress("glNamedBufferSubData");
    dword_70371C5C = (int)wglGetProcAddress("glNamedFramebufferDrawBuffer");
LABEL_81:
    dword_70371C58 = (int)wglGetProcAddress("glNamedFramebufferDrawBuffers");
    dword_70371C54 = (int)wglGetProcAddress("glNamedFramebufferParameteri");
LABEL_82:
    dword_70371C50 = (int)wglGetProcAddress("glNamedFramebufferReadBuffer");
    dword_70371C4C = (int)wglGetProcAddress("glNamedFramebufferRenderbuffer");
LABEL_83:
    dword_70371C48 = (int)wglGetProcAddress("glNamedFramebufferTexture");
    dword_70371C44 = (int)wglGetProcAddress("glNamedFramebufferTextureLayer");
LABEL_84:
    dword_70371C40 = (int)wglGetProcAddress("glNamedRenderbufferStorage");
    dword_70371C3C = (int)wglGetProcAddress("glNamedRenderbufferStorageMultisample");
LABEL_85:
    dword_70371C38 = (int)wglGetProcAddress("glTextureBuffer");
    dword_70371C34 = (int)wglGetProcAddress("glTextureBufferRange");
LABEL_86:
    dword_70371C30 = (int)wglGetProcAddress("glTextureParameterIiv");
    dword_70371C2C = (int)wglGetProcAddress("glTextureParameterIuiv");
LABEL_87:
    dword_70371C28 = (int)wglGetProcAddress("glTextureParameterf");
    dword_70371C24 = (int)wglGetProcAddress("glTextureParameterfv");
LABEL_88:
    dword_70371C20 = (int)wglGetProcAddress("glTextureParameteri");
    dword_70371C1C = (int)wglGetProcAddress("glTextureParameteriv");
LABEL_89:
    dword_70371C18 = (int)wglGetProcAddress("glTextureStorage1D");
    dword_70371C14 = (int)wglGetProcAddress("glTextureStorage2D");
LABEL_90:
    dword_70371C10 = (int)wglGetProcAddress("glTextureStorage2DMultisample");
    dword_70371C0C = (int)wglGetProcAddress("glTextureStorage3D");
LABEL_91:
    dword_70371C08 = (int)wglGetProcAddress("glTextureStorage3DMultisample");
    dword_70371C04 = (int)wglGetProcAddress("glTextureSubImage1D");
LABEL_92:
    dword_70371C00 = (int)wglGetProcAddress("glTextureSubImage2D");
    dword_70371BFC = (int)wglGetProcAddress("glTextureSubImage3D");
LABEL_93:
    dword_70371BF8 = (int)wglGetProcAddress("glTransformFeedbackBufferBase");
    dword_70371BF4 = (int)wglGetProcAddress("glTransformFeedbackBufferRange");
LABEL_94:
    dword_70371BF0 = (int)wglGetProcAddress("glUnmapNamedBuffer");
    dword_70371BEC = (int)wglGetProcAddress("glVertexArrayAttribBinding");
LABEL_95:
    dword_70371BE8 = (int)wglGetProcAddress("glVertexArrayAttribFormat");
    dword_70371BE4 = (int)wglGetProcAddress("glVertexArrayAttribIFormat");
LABEL_96:
    dword_70371BE0 = (int)wglGetProcAddress("glVertexArrayAttribLFormat");
    dword_70371BDC = (int)wglGetProcAddress("glVertexArrayBindingDivisor");
LABEL_97:
    dword_70371BD8 = (int)wglGetProcAddress("glVertexArrayElementBuffer");
    dword_70371BD4 = (int)wglGetProcAddress("glVertexArrayVertexBuffer");
    goto LABEL_98;
  }
  v3 = wglGetProcAddress("glGetNamedFramebufferAttachmentParameteriv");
  dword_70371CC8 = (int)v3;
  dword_70371CC4 = (int)wglGetProcAddress("glGetNamedFramebufferParameteriv");
  if ( !dword_70371CC4 || !v3 )
    goto LABEL_68;
  v4 = wglGetProcAddress("glGetNamedRenderbufferParameteriv");
  dword_70371CC0 = (int)v4;
  dword_70371CBC = (int)wglGetProcAddress("glGetQueryBufferObjecti64v");
  if ( !dword_70371CBC || !v4 )
    goto LABEL_69;
  v5 = wglGetProcAddress("glGetQueryBufferObjectiv");
  dword_70371CB8 = (int)v5;
  dword_70371CB4 = (int)wglGetProcAddress("glGetQueryBufferObjectui64v");
  if ( !dword_70371CB4 || !v5 )
    goto LABEL_70;
  v6 = wglGetProcAddress("glGetQueryBufferObjectuiv");
  dword_70371CB0 = (int)v6;
  dword_70371CAC = (int)wglGetProcAddress("glGetTextureImage");
  if ( !dword_70371CAC || !v6 )
    goto LABEL_71;
  v7 = wglGetProcAddress("glGetTextureLevelParameterfv");
  dword_70371CA8 = (int)v7;
  dword_70371CA4 = (int)wglGetProcAddress("glGetTextureLevelParameteriv");
  if ( !dword_70371CA4 || !v7 )
    goto LABEL_72;
  v8 = wglGetProcAddress("glGetTextureParameterIiv");
  dword_70371CA0 = (int)v8;
  dword_70371C9C = (int)wglGetProcAddress("glGetTextureParameterIuiv");
  if ( !dword_70371C9C || !v8 )
    goto LABEL_73;
  v9 = wglGetProcAddress("glGetTextureParameterfv");
  dword_70371C98 = (int)v9;
  dword_70371C94 = (int)wglGetProcAddress("glGetTextureParameteriv");
  if ( !dword_70371C94 || !v9 )
    goto LABEL_74;
  v10 = wglGetProcAddress("glGetTransformFeedbacki64_v");
  dword_70371C90 = (int)v10;
  dword_70371C8C = (int)wglGetProcAddress("glGetTransformFeedbacki_v");
  if ( !dword_70371C8C || !v10 )
    goto LABEL_75;
  v11 = wglGetProcAddress("glGetTransformFeedbackiv");
  dword_70371C88 = (int)v11;
  dword_70371C84 = (int)wglGetProcAddress("glGetVertexArrayIndexed64iv");
  if ( !dword_70371C84 || !v11 )
    goto LABEL_76;
  v12 = wglGetProcAddress("glGetVertexArrayIndexediv");
  dword_70371C80 = (int)v12;
  dword_70371C7C = (int)wglGetProcAddress("glGetVertexArrayiv");
  if ( !dword_70371C7C || !v12 )
    goto LABEL_77;
  v13 = wglGetProcAddress("glInvalidateNamedFramebufferData");
  dword_70371C78 = (int)v13;
  dword_70371C74 = (int)wglGetProcAddress("glInvalidateNamedFramebufferSubData");
  if ( !dword_70371C74 || !v13 )
    goto LABEL_78;
  v14 = wglGetProcAddress("glMapNamedBuffer");
  dword_70371C70 = (int)v14;
  dword_70371C6C = (int)wglGetProcAddress("glMapNamedBufferRange");
  if ( !dword_70371C6C || !v14 )
    goto LABEL_79;
  v15 = wglGetProcAddress("glNamedBufferData");
  dword_70371C68 = (int)v15;
  dword_70371C64 = (int)wglGetProcAddress("glNamedBufferStorage");
  if ( !dword_70371C64 || !v15 )
    goto LABEL_80;
  v16 = wglGetProcAddress("glNamedBufferSubData");
  dword_70371C60 = (int)v16;
  dword_70371C5C = (int)wglGetProcAddress("glNamedFramebufferDrawBuffer");
  if ( !dword_70371C5C || !v16 )
    goto LABEL_81;
  v17 = wglGetProcAddress("glNamedFramebufferDrawBuffers");
  dword_70371C58 = (int)v17;
  dword_70371C54 = (int)wglGetProcAddress("glNamedFramebufferParameteri");
  if ( !dword_70371C54 || !v17 )
    goto LABEL_82;
  v18 = wglGetProcAddress("glNamedFramebufferReadBuffer");
  dword_70371C50 = (int)v18;
  dword_70371C4C = (int)wglGetProcAddress("glNamedFramebufferRenderbuffer");
  if ( !dword_70371C4C || !v18 )
    goto LABEL_83;
  v19 = wglGetProcAddress("glNamedFramebufferTexture");
  dword_70371C48 = (int)v19;
  dword_70371C44 = (int)wglGetProcAddress("glNamedFramebufferTextureLayer");
  if ( !dword_70371C44 || !v19 )
    goto LABEL_84;
  v20 = wglGetProcAddress("glNamedRenderbufferStorage");
  dword_70371C40 = (int)v20;
  dword_70371C3C = (int)wglGetProcAddress("glNamedRenderbufferStorageMultisample");
  if ( !dword_70371C3C || !v20 )
    goto LABEL_85;
  v21 = wglGetProcAddress("glTextureBuffer");
  dword_70371C38 = (int)v21;
  dword_70371C34 = (int)wglGetProcAddress("glTextureBufferRange");
  if ( !dword_70371C34 || !v21 )
    goto LABEL_86;
  v22 = wglGetProcAddress("glTextureParameterIiv");
  dword_70371C30 = (int)v22;
  dword_70371C2C = (int)wglGetProcAddress("glTextureParameterIuiv");
  if ( !dword_70371C2C || !v22 )
    goto LABEL_87;
  v23 = wglGetProcAddress("glTextureParameterf");
  dword_70371C28 = (int)v23;
  dword_70371C24 = (int)wglGetProcAddress("glTextureParameterfv");
  if ( !dword_70371C24 || !v23 )
    goto LABEL_88;
  v24 = wglGetProcAddress("glTextureParameteri");
  dword_70371C20 = (int)v24;
  dword_70371C1C = (int)wglGetProcAddress("glTextureParameteriv");
  if ( !dword_70371C1C || !v24 )
    goto LABEL_89;
  v25 = wglGetProcAddress("glTextureStorage1D");
  dword_70371C18 = (int)v25;
  dword_70371C14 = (int)wglGetProcAddress("glTextureStorage2D");
  if ( !dword_70371C14 || !v25 )
    goto LABEL_90;
  v26 = wglGetProcAddress("glTextureStorage2DMultisample");
  dword_70371C10 = (int)v26;
  dword_70371C0C = (int)wglGetProcAddress("glTextureStorage3D");
  if ( !dword_70371C0C || !v26 )
    goto LABEL_91;
  v27 = wglGetProcAddress("glTextureStorage3DMultisample");
  dword_70371C08 = (int)v27;
  dword_70371C04 = (int)wglGetProcAddress("glTextureSubImage1D");
  if ( !dword_70371C04 || !v27 )
    goto LABEL_92;
  v28 = wglGetProcAddress("glTextureSubImage2D");
  dword_70371C00 = (int)v28;
  dword_70371BFC = (int)wglGetProcAddress("glTextureSubImage3D");
  if ( !dword_70371BFC || !v28 )
    goto LABEL_93;
  v29 = wglGetProcAddress("glTransformFeedbackBufferBase");
  dword_70371BF8 = (int)v29;
  dword_70371BF4 = (int)wglGetProcAddress("glTransformFeedbackBufferRange");
  if ( !dword_70371BF4 || !v29 )
    goto LABEL_94;
  v30 = wglGetProcAddress("glUnmapNamedBuffer");
  dword_70371BF0 = (int)v30;
  dword_70371BEC = (int)wglGetProcAddress("glVertexArrayAttribBinding");
  if ( !dword_70371BEC || !v30 )
    goto LABEL_95;
  v31 = wglGetProcAddress("glVertexArrayAttribFormat");
  dword_70371BE8 = (int)v31;
  dword_70371BE4 = (int)wglGetProcAddress("glVertexArrayAttribIFormat");
  if ( !dword_70371BE4 || !v31 )
    goto LABEL_96;
  v32 = wglGetProcAddress("glVertexArrayAttribLFormat");
  dword_70371BE0 = (int)v32;
  dword_70371BDC = (int)wglGetProcAddress("glVertexArrayBindingDivisor");
  if ( !dword_70371BDC || !v32 )
    goto LABEL_97;
  v33 = wglGetProcAddress("glVertexArrayElementBuffer");
  v34 = v33;
  dword_70371BD8 = (int)v33;
  v35 = wglGetProcAddress("glVertexArrayVertexBuffer");
  dword_70371BD4 = (int)v35;
  if ( v34 && v35 )
  {
    dword_70371BD0 = (int)wglGetProcAddress("glVertexArrayVertexBuffers");
    return dword_70371BD0 == 0;
  }
LABEL_98:
  dword_70371BD0 = (int)wglGetProcAddress("glVertexArrayVertexBuffers");
  return 1;
}
