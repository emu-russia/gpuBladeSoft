int __userpurge GPUopen@<eax>(int ebp0@<ebp>, int a1)
{
  int v2; // eax@1
  int v3; // edx@3
  bool v4; // zf@3
  bool v5; // sf@3
  unsigned __int8 v6; // of@3
  int v7; // ecx@9
  bool v8; // zf@9
  bool v9; // sf@9
  unsigned __int8 v10; // of@9

  v2 = dword_700584C0;
  **(_DWORD **)(dword_6FBB51E8 + 40) = a1;
  if ( !v2 || dword_700584C8 )
  {
    v3 = dword_6FBB9530;
    v6 = __OFSUB__(dword_6FBB9530, 2);
    v4 = dword_6FBB9530 == 2;
    v5 = dword_6FBB9530 - 2 < 0;
    if ( dword_6FBB9530 != 2 )
      goto LABEL_4;
LABEL_25:
    dword_6FBB50A0 = dword_6FBB50A0 == 0;
    goto LABEL_9;
  }
  sub_6F733C20();
  v3 = dword_6FBB9530;
  v6 = __OFSUB__(dword_6FBB9530, 2);
  v4 = dword_6FBB9530 == 2;
  v5 = dword_6FBB9530 - 2 < 0;
  if ( dword_6FBB9530 == 2 )
    goto LABEL_25;
LABEL_4:
  if ( !((unsigned __int8)(v5 ^ v6) | v4) )
  {
    if ( v3 == 3 )
    {
      dword_6FBB509C = dword_6FBB509C == 0;
    }
    else if ( v3 == 4 && !dword_6FBB5098 )
    {
      sub_6F753DF0(ebp0);
    }
LABEL_9:
    v7 = dword_6FBB9534;
    v10 = __OFSUB__(dword_6FBB9534, 2);
    v8 = dword_6FBB9534 == 2;
    v9 = dword_6FBB9534 - 2 < 0;
    if ( dword_6FBB9534 != 2 )
      goto LABEL_10;
LABEL_19:
    if ( dword_6FBB5078 )
      sub_6F753BD0();
    else
      sub_6F754DD0(ebp0);
    return 0;
  }
  if ( v3 != 1 )
    goto LABEL_9;
  v7 = dword_6FBB9534;
  dword_6FBB50A4 = dword_6FBB50A4 == 0;
  v10 = __OFSUB__(dword_6FBB9534, 2);
  v8 = dword_6FBB9534 == 2;
  v9 = dword_6FBB9534 - 2 < 0;
  if ( dword_6FBB9534 == 2 )
    goto LABEL_19;
LABEL_10:
  if ( (unsigned __int8)(v9 ^ v10) | v8 )
  {
    if ( v7 == 1 )
    {
      if ( dword_6FD400E0 )
        sub_6F753CE0();
      else
        sub_6F755500(ebp0);
    }
  }
  else if ( v7 == 3 )
  {
    if ( dword_6FBB5094 )
      sub_6F753270();
    else
      sub_6F754690(ebp0);
  }
  else if ( v7 == 4 )
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
      sub_6F751BF0(ebp0);
    }
  }
  return 0;
}
