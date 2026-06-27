bool sub_6F7D8670()
{
  PROC v0; // esi@1
  bool v1; // si@1
  bool result; // al@3

  v0 = wglGetProcAddress("glBindVertexArray");
  dword_70371510 = (int)v0;
  dword_7037150C = (int)wglGetProcAddress("glDeleteVertexArrays");
  v1 = v0 == 0 || dword_7037150C == 0;
  dword_70371508 = (int)wglGetProcAddress("glGenVertexArrays");
  if ( !dword_70371508 || v1 )
  {
    dword_70371504 = (int)wglGetProcAddress("glIsVertexArray");
    result = 1;
  }
  else
  {
    dword_70371504 = (int)wglGetProcAddress("glIsVertexArray");
    result = dword_70371504 == 0;
  }
  return result;
}
