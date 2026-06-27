signed int sub_6F6A5CD0()
{
  int v0; // esi@1
  signed int v1; // ebx@1
  double v2; // st5@1
  signed int result; // eax@1
  double v4; // st6@1
  signed int v5; // ecx@1
  double v6; // st7@3
  double v7; // st6@3

  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  v0 = dword_6FD400C4;
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  v1 = dword_6FD400C8;
  sub_6F69ED60(v0, dword_6FD400C8, &dword_6FCFFF94, &dword_6FCFFF98);
  v2 = (flt_6FBB7584 * 0.0099999998 + 1.0) * (double)dword_6FCFFF94;
  result = (signed int)v2;
  dword_6FCFFF94 = (signed int)v2;
  v4 = (double)dword_6FCFFF98;
  v5 = (signed int)((0.0099999998 * flt_6FBB7588 + 1.0) * v4);
  dword_6FCFFF98 = (signed int)((0.0099999998 * flt_6FBB7588 + 1.0) * v4);
  if ( dword_6FBB52C0 )
  {
    if ( flt_6FBB5528 != 0.0 && flt_6FBB552C != 0.0 && dword_6FBB52C4 != 1 )
    {
LABEL_7:
      v7 = (double)(v0 / 2 - result / 2);
      v6 = (double)(v1 / 2 - v5 / 2);
      goto LABEL_4;
    }
  }
  else if ( flt_6FBB5530 != 0.0 && flt_6FBB5534 != 0.0 && dword_6FBB52E0 != 1 )
  {
    goto LABEL_7;
  }
  v6 = 0.0;
  v7 = 0.0;
LABEL_4:
  dword_6FCFFF8C = (signed int)(v7 + flt_6FBB7574 * 0.0099999998 * (double)result);
  dword_6FCFFF90 = (signed int)(v6 + 0.0099999998 * flt_6FBB7578 * (double)v5);
  return result;
}
