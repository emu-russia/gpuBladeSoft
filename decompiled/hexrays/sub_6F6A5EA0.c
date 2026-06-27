BOOL sub_6F6A5EA0()
{
  int v0; // ebx@1
  int v1; // ebx@1
  int v2; // ebp@1
  unsigned __int8 v3; // al@1
  int v4; // ebp@10
  BOOL result; // eax@14
  int v6; // ST28_4@4
  int v7; // ST2C_4@4
  DWORD v8; // esi@4
  DWORD v9; // eax@4
  int v10; // [sp+0h] [bp-4Ch]@1

  nullsub_10();
  sub_6F6A5CD0();
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  v0 = dword_6FD400C8;
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  glViewport(0, 0, dword_6FD400C4, v0);
  glClearColor(COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
  glClear(0x4000);
  v1 = dword_6FBBDB78;
  v2 = dword_6FBBDB7C;
  v3 = unk_6FBB979E;
  if ( dword_6FBBDB78 != dword_70041D64
    || dword_6FBBDB7C != dword_70041D68
    || ((unk_6FBB979E >> 4) & 1) != dword_70041D60 )
  {
    if ( dword_6FBB52C0 )
    {
      if ( dword_6FBB52C4 == 1 )
      {
        memset(&unk_6FD40020, 0, 0x9Cu);
        dword_6FD4008C = dword_6FBBDB78;
        word_6FD40044 = 156;
        dword_6FD40048 = 5767168;
        dword_6FD40090 = dword_6FBBDB7C;
        dword_6FD40098 = (unk_6FBB979E & 0x10u) < 1 ? 60 : 50;
        if ( ChangeDisplaySettingsA((DEVMODEA *)&unk_6FD40020, 4u) )
        {
          dword_6FBB52C0 = 0;
          sub_6F6961A0();
          v1 = dword_6FBBDB78;
          v2 = dword_6FBBDB7C;
          v3 = unk_6FBB979E;
        }
        else
        {
          ShowWindow((HWND)dword_6FD400CC, 3);
          v1 = dword_6FBBDB78;
          v2 = dword_6FBBDB7C;
          v3 = unk_6FBB979E;
        }
      }
    }
    else if ( dword_6FBB52E0 == 1 )
    {
      GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
      v6 = dword_6FD400C4;
      GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
      v7 = dword_6FD400C8;
      v8 = GetWindowLongA((HWND)dword_6FD400CC, -16);
      v9 = GetWindowLongA((HWND)dword_6FD400CC, -20);
      AdjustWindowRectEx((LPRECT)&dword_6FD400BC, v8, 0, v9);
      SetWindowPos(
        (HWND)dword_6FD400CC,
        0,
        0,
        0,
        dword_6FD400C4 - dword_6FD400BC - v6 + v1,
        dword_6FD400C8 - dword_6FD400C0 - v7 + v2,
        0x42u);
      v1 = dword_6FBBDB78;
      v2 = dword_6FBBDB7C;
      v3 = unk_6FBB979E;
    }
    dword_70041D64 = v1;
    dword_70041D68 = v2;
    dword_70041D60 = (v3 >> 4) & 1;
  }
  sub_6F6A4090();
  if ( dword_6FBB50A4 )
  {
    sub_6F758C00(v2);
    v2 = dword_6FBB50A4;
    if ( dword_6FBB50A4 )
      dword_6FBB50A4 = 0;
  }
  if ( dword_6FBB50A0 )
  {
    sub_6F7583B0(v2);
    if ( dword_6FBB50A0 )
      dword_6FBB50A0 = 0;
  }
  if ( dword_6FBB509C )
  {
    sub_6F757BE0(v2);
    if ( dword_6FBB509C )
      dword_6FBB509C = 0;
  }
  if ( dword_6FD41408 )
  {
    sub_6F756980(v2);
    if ( dword_6FD41408 )
      dword_6FD41408 = 0;
  }
  v4 = dword_6FD400E0;
  if ( dword_6FD400E0 )
    sub_6F755C60(dword_6FD400E0);
  sub_6F683F20(v4);
  sub_6F683DA0(v4);
  if ( unk_6FBB979E & 0x48 )
    byte_6FBB979F = ((((unsigned __int8)byte_6FBB979F >> 7) ^ 1) << 7) | byte_6FBB979F & 0x7F;
  sub_6F72F800();
  sub_6F696070();
  glFlush(v10);
  result = SwapBuffers((HDC)dword_6FD4140C);
  ++dword_70041D5C;
  return result;
}
