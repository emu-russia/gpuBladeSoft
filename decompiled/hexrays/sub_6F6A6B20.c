int __usercall sub_6F6A6B20@<eax>(int *a1@<eax>)
{
  int *v1; // ebx@1
  int v2; // eax@1
  DWORD v3; // esi@9
  DWORD v4; // edi@9
  int v5; // ebp@9
  signed int v6; // esi@69
  signed int v7; // ebx@9
  unsigned int v8; // ebx@11
  HDC v9; // eax@13
  int v10; // eax@14
  HGLRC v11; // eax@16
  int v12; // eax@18
  int v13; // esi@19
  int v14; // ecx@22
  int v15; // ecx@22
  int v16; // ST00_4@22
  unsigned int v17; // ecx@23
  unsigned int v18; // esi@23
  int v19; // ebp@28
  double v20; // st7@28
  double v21; // st5@31
  long double v24; // st4@31
  long double v25; // st5@31
  long double v26; // st7@31
  int v27; // ecx@32
  double v28; // st4@33
  long double v31; // st3@33
  long double v32; // st6@34
  long double v33; // st7@34
  int v34; // ecx@36
  int v35; // edi@36
  int v36; // ecx@36
  void *v37; // eax@38
  _DWORD *v38; // edx@38
  int v39; // ecx@38
  int v40; // ebp@39
  signed int v41; // edi@55
  int v42; // esi@56
  int *v43; // eax@56
  _DWORD *v44; // ecx@58
  void (__stdcall *v46)(UINT, UINT, PVOID, UINT); // edi@62
  HMODULE v47; // eax@64
  int (__stdcall *v48)(_DWORD); // eax@65
  int v49; // [sp+Ch] [bp-A4h]@10
  int v50; // [sp+10h] [bp-A0h]@10
  int v51; // [sp+14h] [bp-9Ch]@10
  int v52; // [sp+18h] [bp-98h]@10
  int v53; // [sp+3Ch] [bp-74h]@9
  int v54; // [sp+60h] [bp-50h]@1
  int v55; // [sp+64h] [bp-4Ch]@1
  int v56; // [sp+68h] [bp-48h]@56
  int *v57; // [sp+6Ch] [bp-44h]@13
  int v58; // [sp+70h] [bp-40h]@13
  int v59[15]; // [sp+74h] [bp-3Ch]@12

  v1 = a1;
  nullsub_10();
  v2 = *v1;
  *(float *)&v55 = 1.0;
  *(float *)&v54 = 1.0;
  dword_6FD400CC = v2;
  if ( dword_6FBB952C )
  {
    v46 = (void (__stdcall *)(UINT, UINT, PVOID, UINT))SystemParametersInfoA;
    dword_70041CF0 = 1;
    SystemParametersInfoA(0x10u, 0, &dword_70041CEC, 1u);
    SystemParametersInfoA(0x11u, 0, 0, 1u);
  }
  else
  {
    if ( !dword_70041CF0 )
      goto LABEL_3;
    v46 = (void (__stdcall *)(UINT, UINT, PVOID, UINT))SystemParametersInfoA;
    dword_70041CF0 = 0;
    SystemParametersInfoA(0x11u, dword_70041CEC, 0, 1u);
  }
  if ( !dword_6FBB952C )
  {
LABEL_3:
    if ( dword_70041CE8 )
    {
      dword_70041CE8 = 0;
      off_6FADD9E0(3);
      if ( dword_70041CE4 )
      {
        FreeLibrary((HMODULE)dword_70041CE4);
        dword_70041CE4 = 0;
      }
      off_6FADD9E0 = sub_6F693A60;
      SystemParametersInfoA(0x56u, dword_70041CE0, 0, 1u);
    }
    if ( !dword_6FBB8524 )
      goto LABEL_8;
    goto LABEL_61;
  }
  dword_70041CE8 = 1;
  v47 = LoadLibraryA("kernel32.dll");
  dword_70041CE4 = (int)v47;
  if ( v47 )
  {
    v48 = (int (__stdcall *)(_DWORD))GetProcAddress(v47, "SetThreadExecutionState");
    if ( v48 )
    {
      off_6FADD9E0 = v48;
    }
    else
    {
      off_6FADD9E0 = sub_6F693A60;
      v48 = sub_6F693A60;
    }
  }
  else
  {
    v48 = off_6FADD9E0;
  }
  v48(-2147483645);
  v46(0x54u, 0, &dword_70041CE0, 1u);
  v46(0x56u, 0, 0, 1u);
  if ( !dword_6FBB8524 )
  {
LABEL_8:
    ShowCursor(1);
    goto LABEL_9;
  }
LABEL_61:
  ShowCursor(0);
LABEL_9:
  EnumDisplaySettingsA(0, 0xFFFFFFFF, (DEVMODEA *)&unk_70041C40);
  GetWindowPlacement((HWND)dword_6FD400CC, (WINDOWPLACEMENT *)&unk_70041D00);
  dword_70041CF8 = GetWindowLongA((HWND)dword_6FD400CC, -16);
  dword_70041CF4 = (int)GetMenu((HWND)dword_6FD400CC);
  SetMenu((HWND)dword_6FD400CC, 0);
  v3 = GetWindowLongA((HWND)dword_6FD400CC, -16);
  v4 = GetWindowLongA((HWND)dword_6FD400CC, -20);
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  v5 = dword_6FD400C4;
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  v53 = dword_6FD400C8;
  AdjustWindowRectEx((LPRECT)&dword_6FD400BC, v3, 0, v4);
  v7 = dword_6FBB52DC + dword_6FD400C8 - dword_6FD400C0 - v53;
  if ( dword_6FBB958C )
  {
    v52 = dword_6FBB52DC + dword_6FD400C8 - dword_6FD400C0 - v53;
    v51 = dword_6FBB52D8 + dword_6FD400C4 - dword_6FD400BC - v5;
    v50 = dword_6FBB9594;
    v49 = dword_6FBB9590;
  }
  else
  {
    v51 = dword_6FBB52D8 + dword_6FD400C4 - dword_6FD400BC - v5;
    v52 = dword_6FBB52DC + dword_6FD400C8 - dword_6FD400C0 - v53;
    v6 = dword_6FBB52D8 + dword_6FD400C4 - dword_6FD400BC - v5;
    v49 = GetSystemMetrics(0) / 2 - v6 / 2;
    v50 = GetSystemMetrics(1) / 2 - v7 / 2;
  }
  v8 = 0;
  SetWindowPos((HWND)dword_6FD400CC, 0, v49, v50, v51, v52, 0x40u);
  sub_6F6961A0();
  SetForegroundWindow((HWND)dword_6FD400CC);
  SetFocus((HWND)dword_6FD400CC);
  UpdateWindow((HWND)dword_6FD400CC);
  do
  {
    v59[v8] = 0;
    ++v8;
  }
  while ( v8 < 8 );
  v57 = (int *)65576;
  v58 = 37;
  BYTE1(v59[0]) = dword_6FBB52D0;
  v9 = GetDC((HWND)dword_6FD400CC);
  dword_6FD4140C = v9;
  if ( !v9 )
  {
    nullsub_10();
    exit(1);
  }
  v10 = ChoosePixelFormat(v9, (const PIXELFORMATDESCRIPTOR *)&v57);
  if ( !v10 )
  {
    nullsub_10();
    exit(1);
  }
  if ( !SetPixelFormat((HDC)dword_6FD4140C, v10, (const PIXELFORMATDESCRIPTOR *)&v57) )
  {
    nullsub_10();
    exit(1);
  }
  v11 = wglCreateContext((HDC)dword_6FD4140C);
  dword_70041CDC = (int)v11;
  if ( !v11 )
  {
    nullsub_10();
    exit(1);
  }
  if ( !wglMakeCurrent((HDC)dword_6FD4140C, v11) )
  {
    nullsub_10();
    exit(1);
  }
  v12 = sub_6F7E6DE0();
  if ( v12 )
  {
    sub_6F7E6DA0(v12);
    nullsub_10();
    v13 = dword_6FBB52E4;
    if ( dword_6FBB52E4 != 1 )
      goto LABEL_20;
LABEL_71:
    sub_6F695FF0(0);
    goto LABEL_22;
  }
  sub_6F7E6DC0(1u);
  nullsub_10();
  v13 = dword_6FBB52E4;
  if ( dword_6FBB52E4 == 1 )
    goto LABEL_71;
LABEL_20:
  if ( v13 == 2 )
    sub_6F695FF0(dword_6FBB52E8);
LABEL_22:
  glGetString(7937);
  nullsub_10();
  glGetString(7938);
  nullsub_10();
  glGetString(7936);
  nullsub_10();
  glGetString(7939);
  nullsub_10();
  dword_7036F578(dword_6FD4140C);
  nullsub_10();
  glGetIntegerv(v14, 3379, (int)&v55);
  nullsub_10();
  glGetIntegerv(v15, 34018, (int)&v55);
  nullsub_10();
  glClearColor(COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
  glClear(0x4000);
  glFlush(v16);
  sub_6F6930C0();
  if ( dword_6FBB530C )
  {
    sub_6F695280(&v57, (const char *)&dword_6FBB5310);
    dword_70041D3C = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))sub_6F72E3B0((int)&v57);
    if ( v57 != v59 )
      j_free_1(v57);
    sub_6F695280(&v57, (const char *)&dword_6FBB5310);
    dword_70041D38 = (int (__cdecl *)(_DWORD, _DWORD))sub_6F72E330((int)&v57);
    if ( v57 != v59 )
      j_free_1(v57);
    if ( dword_70041D3C && dword_70041D38 )
    {
      nullsub_10();
      dword_70041D38(&v55, &v54);
      nullsub_10();
    }
    else
    {
      nullsub_10();
      dword_6FBB530C = 0;
    }
  }
  v17 = (signed __int64)((double)(unsigned int)(720 * dword_6FBB52F4) * *(float *)&v55);
  dword_70041D58 = (signed __int64)((double)(unsigned int)(720 * dword_6FBB52F4) * *(float *)&v55);
  v18 = (signed __int64)((double)(unsigned int)(576 * dword_6FBB52F8) * *(float *)&v54);
  dword_70041D54 = (signed __int64)((double)(unsigned int)(576 * dword_6FBB52F8) * *(float *)&v54);
  if ( v17 < 4 * dword_6FBB51DC )
  {
    dword_70041D58 = 4 * dword_6FBB51DC;
    v17 = 4 * dword_6FBB51DC;
  }
  if ( v18 < dword_6FBB51E0 )
  {
    dword_70041D54 = dword_6FBB51E0;
    v18 = dword_6FBB51E0;
  }
  if ( !byte_7036F85E )
  {
    v19 = 0;
    v20 = (double)v17;
    if ( v17 <= 1 )
    {
      v26 = 1.0;
    }
    else
    {
      while ( 1 )
      {
        v21 = (double)++v19 * 0.6931471805599453 * 1.442695040888963387;
        _ST4 = v21;
        __asm { frndint }
        v24 = __F2XM1__(v21 - _ST4) + 1.0;
        v25 = v20;
        v26 = v24;
        if ( v25 <= v24 )
          break;
        v20 = v25;
      }
    }
    v27 = 0;
    if ( v18 <= 1 )
    {
      v32 = v26;
      v33 = 1.0;
    }
    else
    {
      do
      {
        v28 = (double)++v27 * 0.6931471805599453 * 1.442695040888963387;
        _ST3 = v28;
        __asm { frndint }
        v31 = __F2XM1__(v28 - _ST3) + 1.0;
      }
      while ( (double)v18 > v31 );
      v32 = v26;
      v33 = v31;
    }
    dword_70041D58 = (signed __int64)v32;
    dword_70041D54 = (signed __int64)v33;
  }
  nullsub_10();
  glEnable(3553);
  glGenTextures(1, (int)&dword_70041D34);
  glBindTexture(3553, dword_70041D34);
  glPixelStorei(3317, 4);
  glTexParameteri(3553, 10242, 10496);
  glTexParameteri(3553, 10243, 10496);
  glTexParameteri(3553, 10240, 9728);
  glTexParameteri(3553, 10241, 9728);
  glTexImage2D(v34, dword_70041D58, 3553, 0, 32856, dword_70041D58, dword_70041D54, 0, 32993, 5121, 0);
  glDrawBuffer(1029);
  glReadBuffer(1029);
  glMatrixMode(5889);
  glLoadIdentity();
  glMatrixMode(5888);
  glLoadIdentity();
  glFrontFace(2305);
  glDisable(2884);
  glDisable(3089);
  glDisable(2929);
  glDepthMask(0);
  glHint(3152, 4353);
  glHint(3155, 4353);
  glViewport(0, 0, dword_6FBB52D8, dword_6FBB52DC);
  v35 = dword_6FBB9580;
  dword_70041D5C = 0;
  dword_6FBBDA00 = dword_6FBB7564;
  v36 = 4 * dword_6FBB9580 + 4;
  if ( (unsigned int)dword_6FBB9580 >= 0x20000000 )
    v36 = -1;
  flt_6FCFFF9C = 0.0;
  flt_6FCFFFA0 = 0.0;
  flt_6FCFFFA4 = 0.0;
  dword_6FBBDA74 = dword_6FBB7570;
  dword_6FBBDA04 = dword_6FBB7568;
  dword_6FBBDA70 = dword_6FBB756C;
  flt_6FCFFFA8 = 0.0;
  dword_70041D64 = -1;
  dword_70041D68 = -1;
  dword_70041D60 = -1;
  v37 = sub_6F961B40(v36);
  *(_DWORD *)v37 = v35;
  v38 = (char *)v37 + 4;
  v39 = v35 - 1;
  if ( v35 - 1 >= 0 )
  {
    v40 = v35 & 7;
    if ( !(v35 & 7) )
      goto LABEL_98;
    if ( v40 != 1 )
    {
      if ( v40 != 2 )
      {
        if ( v40 != 3 )
        {
          if ( v40 != 4 )
          {
            if ( v40 != 5 )
            {
              if ( v40 != 6 )
              {
                *((_DWORD *)v37 + 1) = 0;
                v39 = v35 - 2;
                v38 = (char *)v37 + 8;
              }
              *v38 = 0;
              --v39;
              ++v38;
            }
            *v38 = 0;
            --v39;
            ++v38;
          }
          *v38 = 0;
          --v39;
          ++v38;
        }
        *v38 = 0;
        --v39;
        ++v38;
      }
      *v38 = 0;
      --v39;
      ++v38;
    }
    --v39;
    *v38 = 0;
    ++v38;
    if ( v39 != -1 )
    {
LABEL_98:
      do
      {
        v39 -= 8;
        *v38 = 0;
        v38 += 8;
        *(v38 - 7) = 0;
        *(v38 - 6) = 0;
        *(v38 - 5) = 0;
        *(v38 - 4) = 0;
        *(v38 - 3) = 0;
        *(v38 - 2) = 0;
        *(v38 - 1) = 0;
      }
      while ( v39 != -1 );
    }
  }
  dword_70041D2C = (int)v37 + 4;
  dword_70041D44 = (int)sub_6F961B40(dword_6FBB9580);
  dword_70041D40 = (int)sub_6F961B40(dword_6FBB9580);
  byte_70041D30 = 1;
  if ( dword_6FBB9580 > 1 )
  {
    v41 = 1;
    do
    {
      *(_BYTE *)(dword_70041D44 + v41) = 0;
      *(_BYTE *)(dword_70041D40 + v41) = 0;
      v42 = dword_6FBB9580;
      v56 = 0;
      v43 = (int *)sub_6F961B60(0x10u);
      *v43 = (int)off_6FB4E814;
      v43[1] = v41;
      v43[2] = v42;
      v43[3] = (int)sub_6F6A2810;
      v57 = v43;
      sub_6F9385D0(&v56, (int *)&v57, 0);
      if ( v57 )
        (*(void (**)(void))(*v57 + 4))();
      v44 = (_DWORD *)(dword_70041D2C + 4 * v41);
      if ( *v44 )
        sub_6F95D3C0();
      ++v41;
      *v44 = v56;
    }
    while ( dword_6FBB9580 > v41 );
  }
  return 0;
}
