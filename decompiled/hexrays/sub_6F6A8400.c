int __usercall sub_6F6A8400@<eax>(int a1@<ebp>)
{
  int v1; // ebx@11
  int v2; // edi@26
  bool v3; // zf@26
  bool v4; // sf@26
  unsigned __int8 v5; // of@26
  const char *v7; // [sp+4h] [bp-28h]@1
  const char *v8; // [sp+4h] [bp-28h]@14
  const char *v9; // [sp+4h] [bp-28h]@16
  const char *v10; // [sp+8h] [bp-24h]@1
  const char *v11; // [sp+8h] [bp-24h]@14
  const char *v12; // [sp+8h] [bp-24h]@16

  sub_6F6898F0();
  sub_6F75F0A0(dword_6FBB9548, dword_6FBB954C, dword_6FBB9550, (const char *)dword_6FBB51C4);
  nullsub_10();
  nullsub_10();
  v10 = "20190825";
  nullsub_10();
  nullsub_10();
  sub_6F75A390();
  sub_6F7617B0();
  sub_6F7295E0();
  dword_6FBB97A0 = 1024;
  *(_DWORD *)&word_6FBB979C = 343941120;
  sub_6F75A6D0(dword_6FD40978);
  dword_6FD40968 = 1;
  byte_6FD40960 = 0;
  memset(dword_6FD40560, 0, 0x400u);
  dword_6FD40964 = 0;
  memset(dword_6FD40160, 0, 0x400u);
  dword_6FD40144 = sub_6F75A3B0();
  dword_6FD40140 = sub_6F75A3B0();
  sub_6F75A5F0(dword_6FD40144, 0x100u);
  sub_6F75A5F0(dword_6FD40140, 0x200u);
  dword_6FD40120 = 0;
  dword_6FD40124 = 0;
  dword_6FD40128 = 0;
  dword_6FD4012C = 0;
  dword_6FD40130 = 0;
  dword_6FD40134 = 0;
  dword_6FD40138 = 0;
  dword_6FD4013C = 0;
  sub_6F6A8120();
  sub_6F71F120();
  sub_6F751340();
  sub_6F7341E0();
  sub_6F6A6B20(*(int **)(dword_6FBB51E8 + 40));
  sub_6F731C50();
  sub_6F733910();
  if ( dword_6FBB9554 && sub_6F69BB30() < 0 )
  {
    puts("[GPU] Unable to start debug server.");
    fflush(0);
  }
  dword_70041D6C = (int)"cpuWriteDataWord";
  if ( (*(int (__cdecl **)(int *))(dword_6FBB51E8 + 48))(&dword_70041D6C) )
  {
    v1 = -1;
    puts("[GET] Error: Can't find \"cpuWriteDataWord\" function");
    nullsub_10();
    return v1;
  }
  dword_70041D6C = (int)"cpuReadDataWordU";
  dword_70041428 = dword_70041D70;
  if ( (*(int (__cdecl **)(int *))(dword_6FBB51E8 + 48))(&dword_70041D6C) )
  {
    v1 = -1;
    puts("[GET] Error: Can't find \"cpuReadDataWordU\" function");
    nullsub_10();
    return v1;
  }
  dword_70041D6C = (int)"cpuHookPortByte";
  dword_70041424 = (int (__cdecl *)(_DWORD, _DWORD))dword_70041D70;
  if ( (*(int (__cdecl **)(int *))(dword_6FBB51E8 + 48))(&dword_70041D6C) )
  {
    v1 = -1;
    puts("[GET] Error: Can't find \"cpuHookPortByte\" function");
    nullsub_10();
    return v1;
  }
  dword_70041D6C = (int)"cpuHookPortHalf";
  if ( (*(int (__cdecl **)(_DWORD))(dword_6FBB51E8 + 48))(&dword_70041D6C) )
  {
    v1 = -1;
    puts("[GET] Error: Can't find \"cpuHookPortHalf\" function");
    nullsub_10();
    return v1;
  }
  dword_70041D6C = (int)"cpuHookPortWord";
  if ( (*(int (__cdecl **)(_DWORD))(dword_6FBB51E8 + 48))(&dword_70041D6C) )
  {
    v1 = -1;
    puts("[GET] Error: Can't find \"cpuHookPortWord\" function");
    nullsub_10();
    dword_6FCFFF84 = 0;
    return v1;
  }
  dword_70041D6C = (int)"cpuHookDMAFunc";
  dword_6FCFFF84 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))dword_70041D70;
  if ( (*(int (__cdecl **)(_DWORD))(dword_6FBB51E8 + 48))(&dword_70041D6C) )
  {
    v1 = -1;
    puts("[GET] Error: Can't find \"cpuHookDMAFunc\" function");
    nullsub_10();
    dword_6FCFFF80 = 0;
    return v1;
  }
  dword_70041D6C = (int)"cpuIrqWaitFuncRegister";
  dword_6FCFFF80 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))dword_70041D70;
  if ( (*(int (__cdecl **)(_DWORD))(dword_6FBB51E8 + 48))(&dword_70041D6C) )
  {
    v1 = -1;
    puts("[GET] Error: Can't find \"cpuIrqWaitFuncRegister\" function");
    nullsub_10();
    dword_6FCFFF78 = 0;
    return v1;
  }
  dword_70041D6C = (int)"cpuIrqWaitFuncSet";
  dword_6FCFFF78 = (int (__cdecl *)(_DWORD))dword_70041D70;
  if ( (*(int (__cdecl **)(_DWORD))(dword_6FBB51E8 + 48))(&dword_70041D6C) )
  {
    v1 = -1;
    puts("[GET] Error: Can't find \"cpuIrqWaitFuncSet\" function");
    nullsub_10();
    dword_6FCFFF70 = 0;
    return v1;
  }
  dword_70041D6C = (int)"cpuIrqWaitFuncGet";
  dword_6FCFFF70 = (int (__cdecl *)(_DWORD, _DWORD))dword_70041D70;
  if ( (*(int (__cdecl **)(_DWORD))(dword_6FBB51E8 + 48))(&dword_70041D6C) )
  {
    v1 = -1;
    puts("[GET] Error: Can't find \"cpuIrqWaitFuncGet\" function");
    nullsub_10();
    dword_6FCFFF6C = 0;
    return v1;
  }
  dword_70041D6C = (int)"cpuIrqRequest";
  dword_6FCFFF6C = (int (__cdecl *)(_DWORD))dword_70041D70;
  v1 = (*(int (__cdecl **)(_DWORD))(dword_6FBB51E8 + 48))(&dword_70041D6C);
  if ( v1 )
  {
    v1 = -1;
    puts("[GET] Error: Can't find \"cpuIrqRequest\" function");
    nullsub_10();
    dword_70041420 = 0;
    return v1;
  }
  dword_70041D6C = (int)"padGetKey";
  dword_70041420 = (int (__cdecl *)(_DWORD))dword_70041D70;
  if ( (*(int (__cdecl **)(_DWORD))(dword_6FBB51E8 + 48))(&dword_70041D6C) )
  {
    puts("[GET] Error: Can't find \"padGetKey\" function");
    v10 = "padGetKey";
    v7 = "[GPU] error: STORAGE_GET_FUNC %s\n";
    nullsub_10();
    dword_6FCFFF64 = (int (__cdecl *)(_DWORD, _DWORD))sub_6F69ED40;
  }
  else
  {
    dword_6FCFFF64 = (int (__cdecl *)(_DWORD, _DWORD))dword_70041D70;
  }
  dword_70041D6C = (int)"padGetKeyPress";
  if ( (*(int (__cdecl **)(int *, const char *, const char *, signed int, signed int))(dword_6FBB51E8 + 48))(
         &dword_70041D6C,
         v7,
         v10,
         1,
         64) )
  {
    puts("[GET] Error: Can't find \"padGetKeyPress\" function");
    v11 = "padGetKeyPress";
    v8 = "[GPU] error: STORAGE_GET_FUNC %s\n";
    nullsub_10();
    dword_6FCFFF68 = (int (__cdecl *)(_DWORD, _DWORD))sub_6F69ED40;
  }
  else
  {
    dword_6FCFFF68 = (int (__cdecl *)(_DWORD, _DWORD))dword_70041D70;
  }
  dword_70041D6C = (int)"padGetKeyRelease";
  if ( (*(int (__cdecl **)(int *, const char *, const char *))(dword_6FBB51E8 + 48))(&dword_70041D6C, v8, v11) )
  {
    puts("[GET] Error: Can't find \"padGetKeyRelease\" function");
    v12 = "padGetKeyRelease";
    v9 = "[GPU] error: STORAGE_GET_FUNC %s\n";
    nullsub_10();
    dword_6FCFFF60 = (int (__cdecl *)(_DWORD, _DWORD))sub_6F69ED40;
  }
  else
  {
    dword_6FCFFF60 = (int (__cdecl *)(_DWORD, _DWORD))dword_70041D70;
  }
  dword_70041D6C = (int)"dbgStart";
  if ( (*(int (__cdecl **)(int *, const char *, const char *))(dword_6FBB51E8 + 48))(&dword_70041D6C, v9, v12) )
  {
    puts("[GET] Error: Can't find \"dbgStart\" function");
    nullsub_10();
  }
  dword_6FCFFF84(sub_6F724020, sub_6F71EB20, 528488464);
  dword_6FCFFF84(sub_6F729150, sub_6F728FF0, 528488468);
  dword_6FCFFF7C = dword_6FCFFF80(sub_6F723B10, sub_6F729160, sub_6F723AE0, 2);
  dword_6FCFFF74 = dword_6FCFFF78(sub_6F6A0F60);
  if ( dword_6FBB9530 == 2 )
  {
    dword_6FBB50A0 = dword_6FBB50A0 == 0;
    goto LABEL_26;
  }
  if ( dword_6FBB9530 > 2 )
  {
    if ( dword_6FBB9530 == 3 )
    {
      dword_6FBB509C = dword_6FBB509C == 0;
    }
    else if ( dword_6FBB9530 == 4 && !dword_6FBB5098 )
    {
      sub_6F753DF0(a1);
    }
LABEL_26:
    v2 = dword_6FBB9534;
    v5 = __OFSUB__(dword_6FBB9534, 2);
    v3 = dword_6FBB9534 == 2;
    v4 = dword_6FBB9534 - 2 < 0;
    if ( dword_6FBB9534 != 2 )
      goto LABEL_27;
LABEL_39:
    if ( dword_6FBB5078 )
    {
      sub_6F753BD0();
    }
    else
    {
      sub_6F754DD0(a1);
      v1 = 0;
    }
    return v1;
  }
  if ( dword_6FBB9530 != 1 )
    goto LABEL_26;
  v2 = dword_6FBB9534;
  dword_6FBB50A4 = dword_6FBB50A4 == 0;
  v5 = __OFSUB__(dword_6FBB9534, 2);
  v3 = dword_6FBB9534 == 2;
  v4 = dword_6FBB9534 - 2 < 0;
  if ( dword_6FBB9534 == 2 )
    goto LABEL_39;
LABEL_27:
  if ( (unsigned __int8)(v4 ^ v5) | v3 )
  {
    if ( v2 == 1 )
    {
      if ( dword_6FD400E0 )
      {
        sub_6F753CE0();
      }
      else
      {
        sub_6F755500(a1);
        v1 = 0;
      }
    }
  }
  else if ( v2 == 3 )
  {
    if ( dword_6FBB5094 )
    {
      sub_6F753270();
    }
    else
    {
      sub_6F754690(a1);
      v1 = 0;
    }
  }
  else if ( v2 == 4 )
  {
    if ( dword_6FD400DC )
    {
      dword_6FD400DC = 0;
      sub_6F72F480("Video4 recording stopped");
      if ( dword_6FD400D8 )
      {
        sub_6F88C240(dword_6FD400D8);
        dword_6FD400D8 = 0;
      }
    }
    else
    {
      sub_6F751BF0(a1);
      v1 = 0;
    }
  }
  return v1;
}
