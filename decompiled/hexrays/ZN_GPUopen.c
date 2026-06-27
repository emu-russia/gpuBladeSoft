signed int __userpurge ZN_GPUopen@<eax>(int ebp0@<ebp>, int a1)
{
  int v2; // edx@3
  int v3; // ebx@3
  int v4; // ecx@3
  int v5; // eax@3
  int v6; // ecx@3
  int v7; // edx@12
  bool v8; // zf@12
  bool v9; // sf@12
  unsigned __int8 v10; // of@12
  int v11; // ebx@16
  const char *v13; // [sp+4h] [bp-18h]@3
  int v14; // [sp+8h] [bp-14h]@3

  if ( !a1 || *(_DWORD *)a1 != 1 )
    return -1;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 12);
  dword_6FD412B0 = 1;
  v4 = *(_DWORD *)(a1 + 8);
  dword_6FD412B4 = v2;
  v5 = *(_DWORD *)(a1 + 20);
  dword_6FD412C0 = *(_DWORD *)(a1 + 16);
  dword_6FD412C4 = v5;
  dword_6FD412B8 = v4;
  dword_6FD412BC = v3;
  nullsub_10();
  v13 = "[GPU] ZiNc: game name: %s\n";
  v14 = dword_6FD412C0;
  nullsub_10();
  v6 = dword_6FD412D0;
  **(_DWORD **)(dword_6FBB51E8 + 40) = dword_6FD412B4;
  if ( v6 && !dword_6FD412C8 )
  {
    v13 = "[GPU] Open()\n";
    dword_6FD4098C = 13;
    dword_6FBB51DC = 1024;
    dword_6FBB51E0 = 1024;
    dword_6FD40990 = (dword_6FD412BC == 0) + 1;
    dword_6FD40988 = 1023;
    dword_6FD40984 = 1023;
    dword_6FD40980 = dword_6FBB52F4 << 10;
    dword_6FD4097C = dword_6FBB52F8 << 10;
    dword_6FBB5538 = dword_6FD412B8;
    nullsub_10();
    dword_6FD412C8 = 1;
    dword_6F96D018 = 0;
  }
  if ( dword_6FBB9530 == 2 )
  {
    dword_6FBB50A0 = dword_6FBB50A0 == 0;
    goto LABEL_12;
  }
  if ( dword_6FBB9530 > 2 )
  {
    if ( dword_6FBB9530 == 3 )
    {
      dword_6FBB509C = dword_6FBB509C == 0;
    }
    else if ( dword_6FBB9530 == 4 && !dword_6FBB5098 )
    {
      sub_6F753DF0(ebp0);
    }
LABEL_12:
    v7 = dword_6FBB9534;
    v10 = __OFSUB__(dword_6FBB9534, 2);
    v8 = dword_6FBB9534 == 2;
    v9 = dword_6FBB9534 - 2 < 0;
    if ( dword_6FBB9534 != 2 )
      goto LABEL_13;
LABEL_21:
    v11 = dword_6FBB5078;
    if ( dword_6FBB5078 )
    {
      sub_6F753BD0();
      v11 = 0;
    }
    else
    {
      sub_6F754DD0(ebp0);
    }
    return v11;
  }
  if ( dword_6FBB9530 != 1 )
    goto LABEL_12;
  v7 = dword_6FBB9534;
  dword_6FBB50A4 = dword_6FBB50A4 == 0;
  v10 = __OFSUB__(dword_6FBB9534, 2);
  v8 = dword_6FBB9534 == 2;
  v9 = dword_6FBB9534 - 2 < 0;
  if ( dword_6FBB9534 == 2 )
    goto LABEL_21;
LABEL_13:
  if ( (unsigned __int8)(v9 ^ v10) | v8 )
  {
    if ( v7 == 1 )
    {
      v11 = dword_6FD400E0;
      if ( !dword_6FD400E0 )
      {
        sub_6F755500(ebp0);
        return v11;
      }
      sub_6F753CE0();
    }
    return 0;
  }
  if ( v7 == 3 )
  {
    v11 = dword_6FBB5094;
    if ( dword_6FBB5094 )
    {
      sub_6F753270();
      v11 = 0;
    }
    else
    {
      sub_6F754690(ebp0);
    }
    return v11;
  }
  if ( v7 != 4 )
    return 0;
  v11 = dword_6FD400DC;
  if ( dword_6FD400DC )
  {
    v11 = 0;
    dword_6FD400DC = 0;
    sub_6F72F480("Video4 recording stopped", v13, v14);
    if ( dword_6FD400D8 )
    {
      sub_6F88C240(dword_6FD400D8);
      dword_6FD400D8 = 0;
    }
  }
  else
  {
    sub_6F751BF0(ebp0);
  }
  return v11;
}
