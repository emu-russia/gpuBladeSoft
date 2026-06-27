void sub_6F6A6330()
{
  signed int v0; // ebx@1
  unsigned int *v1; // ecx@2
  int v2; // ebx@4
  _DWORD *v3; // eax@5
  unsigned int v4; // ecx@6
  int v5; // eax@30
  signed int v6; // eax@36

  nullsub_10();
  byte_70041D30 = 0;
  v0 = 1;
  while ( dword_6FBB9580 > v0 )
  {
    v1 = (unsigned int *)(dword_70041D2C + 4 * v0++);
    sub_6F938660(v1);
  }
  if ( dword_70041D2C )
  {
    v2 = dword_70041D2C + 4 * *(_DWORD *)(dword_70041D2C - 4);
    if ( dword_70041D2C != v2 )
    {
      v3 = (_DWORD *)(v2 - 4);
      if ( *(_DWORD *)(v2 - 4)
        || (v4 = (((unsigned int)v3 - dword_70041D2C) >> 2) & 7) != 0
        && ((v3 = (_DWORD *)(v2 - 8), *(_DWORD *)(v2 - 8))
         || v4 != 1
         && (v4 != 2
          && (v4 != 3
           && (v4 != 4
            && (v4 != 5 && (v4 != 6 && (v3 = (_DWORD *)(v2 - 12), *(_DWORD *)(v2 - 12)) || (--v3, *v3)) || (--v3, *v3))
            || (--v3, *v3))
           || (--v3, *v3))
          || (--v3, *v3))) )
      {
LABEL_20:
        sub_6F95D3C0();
      }
      while ( (_DWORD *)dword_70041D2C != v3 )
      {
        if ( !*(v3 - 1) && !*(v3 - 2) && !*(v3 - 3) && !*(v3 - 4) && !*(v3 - 5) && !*(v3 - 6) && !*(v3 - 7) )
        {
          v3 -= 8;
          if ( !*v3 )
            continue;
        }
        goto LABEL_20;
      }
      v5 = *(_DWORD *)(dword_70041D2C - 4);
    }
    j_j_j_free_1((void *)(dword_70041D2C - 4));
  }
  if ( dword_70041D44 )
    j_j_free_1((void *)dword_70041D44);
  if ( dword_70041D40 )
    j_j_free_1((void *)dword_70041D40);
  v6 = dword_6FBBDB50;
  if ( dword_6FBBDB50 > 0 )
  {
    if ( dword_6FBBDADC )
    {
      glDeleteTextures(1, (int)dword_6FBBDAD8);
      v6 = dword_6FBBDB50;
      dword_6FBBDAD0[0] = 0;
      dword_6FBBDAD4 = 0;
      dword_6FBBDAD8[0] = 0;
      dword_6FBBDADC = 0;
    }
    if ( v6 > 1 )
    {
      if ( dword_6FBBDAEC )
      {
        glDeleteTextures(1, (int)&dword_6FBBDAE8);
        v6 = dword_6FBBDB50;
        dword_6FBBDAE0 = 0;
        dword_6FBBDAE4 = 0;
        dword_6FBBDAE8 = 0;
        dword_6FBBDAEC = 0;
      }
      if ( v6 > 2 )
      {
        if ( dword_6FBBDAFC )
        {
          glDeleteTextures(1, (int)&dword_6FBBDAF8);
          v6 = dword_6FBBDB50;
          dword_6FBBDAF0 = 0;
          dword_6FBBDAF4 = 0;
          dword_6FBBDAF8 = 0;
          dword_6FBBDAFC = 0;
        }
        if ( v6 > 3 )
        {
          if ( dword_6FBBDB0C )
          {
            glDeleteTextures(1, (int)&dword_6FBBDB08);
            v6 = dword_6FBBDB50;
            dword_6FBBDB00 = 0;
            dword_6FBBDB04 = 0;
            dword_6FBBDB08 = 0;
            dword_6FBBDB0C = 0;
          }
          if ( v6 > 4 )
          {
            if ( dword_6FBBDB1C )
            {
              glDeleteTextures(1, (int)&dword_6FBBDB18);
              v6 = dword_6FBBDB50;
              dword_6FBBDB10 = 0;
              dword_6FBBDB14 = 0;
              dword_6FBBDB18 = 0;
              dword_6FBBDB1C = 0;
              if ( dword_6FBBDB50 <= 5 )
                goto LABEL_59;
            }
            else if ( v6 <= 5 )
            {
              goto LABEL_59;
            }
            if ( dword_6FBBDB2C )
            {
              glDeleteTextures(1, (int)&dword_6FBBDB28);
              v6 = dword_6FBBDB50;
              dword_6FBBDB20 = 0;
              dword_6FBBDB24 = 0;
              dword_6FBBDB28 = 0;
              dword_6FBBDB2C = 0;
            }
            if ( v6 > 6 )
            {
              if ( dword_6FBBDB3C )
              {
                glDeleteTextures(1, (int)&dword_6FBBDB38);
                v6 = dword_6FBBDB50;
                dword_6FBBDB30 = 0;
                dword_6FBBDB34 = 0;
                dword_6FBBDB38 = 0;
                dword_6FBBDB3C = 0;
              }
              if ( v6 > 7 && dword_6FBBDB4C )
              {
                glDeleteTextures(1, (int)&dword_6FBBDB48);
                dword_6FBBDB40 = 0;
                dword_6FBBDB44 = 0;
                dword_6FBBDB48 = 0;
                dword_6FBBDB4C = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_59:
  dword_6FBBDB50 = 0;
  dword_6FBBDB54 = 0;
  glDeleteTextures(1, (int)&dword_70041D34);
  if ( byte_7036F3B7 && !dword_7036F500(0) )
    nullsub_10();
  wglMakeCurrent((HDC)dword_6FD4140C, (HGLRC)dword_70041CDC);
  if ( !wglMakeCurrent(0, 0) )
    nullsub_10();
  if ( !wglDeleteContext((HGLRC)dword_70041CDC) )
    nullsub_10();
  dword_70041CDC = 0;
  dword_6FD4140C = 0;
  if ( dword_6FD400CC )
  {
    if ( dword_6FBB958C && !(dword_6FBB52E0 | dword_6FBB52C0) )
    {
      GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
      dword_6FBB52D8 = dword_6FD400C4;
      GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
      dword_6FBB52DC = dword_6FD400C8;
      GetWindowRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
      dword_6FBB9590 = dword_6FD400BC;
      GetWindowRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
      dword_6FBB9594 = dword_6FD400C0;
    }
    if ( dword_70041CF0 )
    {
      dword_70041CF0 = 0;
      SystemParametersInfoA(0x11u, dword_70041CEC, 0, 1u);
      if ( dword_70041CE8 )
        goto LABEL_70;
    }
    else if ( dword_70041CE8 )
    {
LABEL_70:
      dword_70041CE8 = 0;
      off_6FADD9E0(3);
      if ( dword_70041CE4 )
      {
        FreeLibrary((HMODULE)dword_70041CE4);
        dword_70041CE4 = 0;
      }
      off_6FADD9E0 = sub_6F693A60;
      SystemParametersInfoA(0x56u, dword_70041CE0, 0, 1u);
      goto LABEL_73;
    }
LABEL_73:
    ShowCursor(1);
    if ( dword_6FBB52C0 )
    {
      dword_6FBB52C0 = 0;
      sub_6F6961A0();
      dword_6FBB52C0 = 1;
    }
    SetWindowPlacement((HWND)dword_6FD400CC, (const WINDOWPLACEMENT *)&unk_70041D00);
    SetWindowLongA((HWND)dword_6FD400CC, -16, dword_70041CF8);
    SetMenu((HWND)dword_6FD400CC, (HMENU)dword_70041CF4);
  }
}
