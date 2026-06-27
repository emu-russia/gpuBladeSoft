bool sub_6F7D8460()
{
  PROC v0; // esi@1
  bool v1; // si@1
  bool result; // al@3

  v0 = wglGetProcAddress("glGetMultisamplefv");
  dword_703715B8 = (int)v0;
  dword_703715B4 = (int)wglGetProcAddress("glSampleMaski");
  v1 = v0 == 0 || dword_703715B4 == 0;
  dword_703715B0 = (int)wglGetProcAddress("glTexImage2DMultisample");
  if ( !dword_703715B0 || v1 )
  {
    dword_703715AC = (int)wglGetProcAddress("glTexImage3DMultisample");
    result = 1;
  }
  else
  {
    dword_703715AC = (int)wglGetProcAddress("glTexImage3DMultisample");
    result = dword_703715AC == 0;
  }
  return result;
}
