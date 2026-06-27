int __cdecl sub_6F6A1A60(int a1)
{
  int result; // eax@1
  double v2; // st7@3
  double v3; // st7@6

  result = dword_6FBB84D8;
  if ( dword_6FBB84D8 )
  {
    GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
    result = dword_6FD400C4;
    if ( *(float *)a1 > 0.00000011920929 )
    {
      v2 = 0.0;
      if ( 0.0 != *(float *)a1 )
        v2 = (double)dword_6FD400C4 * 0.0125;
      LODWORD(flt_6FCFFFA4) = 1106247680;
      flt_6FCFFF9C = v2;
    }
    v3 = *(float *)(a1 + 4);
    if ( v3 > 0.00000011920929 )
    {
      LODWORD(flt_6FCFFFA8) = 1106247680;
      flt_6FCFFFA0 = v3 * ((double)dword_6FD400C4 * 0.000196078431372549);
    }
  }
  return result;
}
