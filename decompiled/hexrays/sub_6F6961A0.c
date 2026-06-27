void sub_6F6961A0()
{
  int v0; // ecx@1
  LONG v1; // ebx@4
  DWORD v2; // edi@4
  DWORD v3; // ebp@4
  int v4; // ebx@4
  int v5; // esi@4
  bool v6; // zf@8
  LONG v7; // eax@11
  LONG v8; // eax@13

  v0 = dword_6FBB52C4;
  if ( dword_6FBB52C0 )
  {
    if ( dword_6FBB52C4 )
    {
      if ( (unsigned int)(dword_6FBB52C4 - 1) > 1 )
      {
LABEL_8:
        nullsub_10();
        v6 = dword_6FBB52C0 == 0;
        dword_6FBB52C0 = dword_6FBB52C0 == 0;
        if ( v6 )
          return;
        v0 = dword_6FBB52C4;
        goto LABEL_2;
      }
      memset(&unk_6FD40020, 0, 0x9Cu);
      word_6FD40044 = 156;
      dword_6FD40048 = 6029312;
      dword_6FD40088 = dword_6FBB52D0;
      dword_6FD4008C = dword_6FBB52C8;
      dword_6FD40090 = dword_6FBB52CC;
      dword_6FD40098 = dword_6FBB52D4;
      v7 = ChangeDisplaySettingsA((DEVMODEA *)&unk_6FD40020, 4u);
    }
    else
    {
      v7 = ChangeDisplaySettingsA(0, 4u);
    }
    if ( !v7 )
    {
      v8 = GetWindowLongA((HWND)dword_6FD400CC, -16);
      SetWindowLongA((HWND)dword_6FD400CC, -16, v8 & 0xFF38FFFF | 0x80000000);
      ShowWindow((HWND)dword_6FD400CC, 3);
      return;
    }
    goto LABEL_8;
  }
LABEL_2:
  if ( v0 )
    ChangeDisplaySettingsA(0, 0);
  v1 = GetWindowLongA((HWND)dword_6FD400CC, -16) & 0x7FFFFFFF | 0xC70000;
  v2 = GetWindowLongA((HWND)dword_6FD400CC, -20);
  SetWindowLongA((HWND)dword_6FD400CC, -16, v1);
  v3 = GetWindowLongA((HWND)dword_6FD400CC, -16);
  ShowWindow((HWND)dword_6FD400CC, 1);
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  v4 = dword_6FD400C4;
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  v5 = dword_6FD400C8;
  AdjustWindowRectEx((LPRECT)&dword_6FD400BC, v3, 0, v2);
  if ( dword_6FBB52E0 != 2 )
    SetWindowPos(
      (HWND)dword_6FD400CC,
      0,
      0,
      0,
      dword_6FBB52D8 + dword_6FD400C4 - dword_6FD400BC - v4,
      dword_6FBB52DC + dword_6FD400C8 - dword_6FD400C0 - v5,
      0x42u);
}
