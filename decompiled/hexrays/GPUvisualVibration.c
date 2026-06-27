int __stdcall GPUvisualVibration(unsigned int a1, unsigned int a2)
{
  int result; // eax@1
  double v3; // st7@3
  double v4; // st7@6
  float v5; // [sp+18h] [bp-14h]@2

  result = dword_6FBB84D8;
  if ( dword_6FBB84D8 )
  {
    v5 = (double)a1;
    GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
    result = dword_6FD400C4;
    if ( v5 > 0.00000011920929 )
    {
      v3 = 0.0;
      if ( 0.0 != v5 )
        v3 = (double)dword_6FD400C4 * 0.0125;
      LODWORD(flt_6FCFFFA4) = 1106247680;
      flt_6FCFFF9C = v3;
    }
    v4 = (double)a2;
    if ( v4 > 0.00000011920929 )
    {
      LODWORD(flt_6FCFFFA8) = 1106247680;
      flt_6FCFFFA0 = v4 * ((double)dword_6FD400C4 * 0.000196078431372549);
    }
  }
  return result;
}
