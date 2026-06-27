bool sub_6F7D5640()
{
  PROC v0; // esi@1
  bool v1; // si@1
  bool result; // al@3

  v0 = wglGetProcAddress("glDrawElementsBaseVertex");
  dword_70371BB8 = (int)v0;
  dword_70371BB4 = (int)wglGetProcAddress("glDrawElementsInstancedBaseVertex");
  v1 = v0 == 0 || dword_70371BB4 == 0;
  dword_70371BB0 = (int)wglGetProcAddress("glDrawRangeElementsBaseVertex");
  if ( !dword_70371BB0 || v1 )
  {
    dword_70371BAC = (int)wglGetProcAddress("glMultiDrawElementsBaseVertex");
    result = 1;
  }
  else
  {
    dword_70371BAC = (int)wglGetProcAddress("glMultiDrawElementsBaseVertex");
    result = dword_70371BAC == 0;
  }
  return result;
}
