char __usercall sub_6F968364@<al>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5, int a6, int a7)
{
  int v7; // ebp@1
  int v8; // eax@1
  int v9; // eax@1
  int v10; // edx@2
  int v11; // eax@2
  int v12; // edi@2
  int v13; // ecx@2
  int v14; // esi@2
  int v15; // ebx@3
  int v16; // esi@12
  int v17; // ebx@12
  int v18; // eax@13
  int v19; // edx@15
  char v20; // cl@16
  bool v21; // zf@18
  char v22; // si@18
  int v24; // [sp+10h] [bp-2Ch]@3
  unsigned int v25; // [sp+14h] [bp-28h]@1
  int v26; // [sp+18h] [bp-24h]@2

  v7 = a1;
  v8 = a1 + 180;
  *(_DWORD *)(v7 + 52) = v8;
  *(_DWORD *)(v7 + 196) = a2;
  v25 = v8;
  v9 = *(_DWORD *)(v7 + 68);
  *(_DWORD *)(v7 + 200) = a3;
  *(_DWORD *)(v7 + 204) = v9;
  *(_DWORD *)(v7 + 208) = *(_DWORD *)(v7 + 72);
  *(_DWORD *)(v7 + 188) = a4;
  *(_DWORD *)(v7 + 192) = a5;
  *(_DWORD *)(v7 + 180) = a6;
  *(_DWORD *)(v7 + 184) = a7;
  do
  {
    v10 = *(_DWORD *)(v7 + 52);
    v11 = *(_DWORD *)(v10 + 28);
    v12 = *(_DWORD *)(v10 + 4);
    v13 = *(_DWORD *)(v10 + 20);
    v14 = *(_DWORD *)(v10 + 12);
    v26 = *(_DWORD *)v10;
    if ( v11 <= v12 )
    {
      v24 = *(_DWORD *)(v10 + 4);
      v15 = *(_DWORD *)(v10 + 28);
    }
    else
    {
      v24 = *(_DWORD *)(v10 + 28);
      v15 = *(_DWORD *)(v10 + 4);
    }
    if ( v13 > v14 )
    {
      v13 = *(_DWORD *)(v10 + 12);
      v14 = *(_DWORD *)(v10 + 20);
    }
    if ( v15 <= v13 && v24 >= v14 )
    {
      if ( v11 == v12 )
      {
        *(_DWORD *)(v7 + 52) = v10 - 24;
      }
      else
      {
        v16 = *(_DWORD *)(v7 + 100);
        v17 = (v11 > v12) + 1;
        if ( v17 != v16 )
        {
          v19 = *(_DWORD *)(v7 + 4);
          v20 = v17 == 1 ? ((v11 + v19 - 1) & -v19) - v11 >= *(_DWORD *)(v7 + 8) : (v11 & (v19 - 1)) >= *(_DWORD *)(v7 + 8);
          v21 = v16 == 0;
          v22 = v20;
          if ( !v21 )
          {
            if ( sub_6F967F5A(v7, v20) )
              return 1;
          }
          if ( sub_6F967E9C(v7, v17, v22) )
            return 1;
        }
        v18 = *(_DWORD *)(v7 + 76);
        if ( v17 == 1 )
        {
          if ( sub_6F968036(v7, 3, (void (__cdecl *)(unsigned int))sub_6F79C4D0, v18, *(_DWORD *)(v7 + 80)) )
            return 1;
        }
        else if ( sub_6F9681BC(v7, 3, (void (__cdecl *)(unsigned int))sub_6F79C4D0, v18, *(_DWORD *)(v7 + 80)) )
        {
          return 1;
        }
      }
    }
    else
    {
      sub_6F79C4D0(v10);
      *(_DWORD *)(v7 + 52) += 24;
    }
  }
  while ( v25 <= *(_DWORD *)(v7 + 52) );
  *(_DWORD *)(v7 + 72) = v12;
  *(_DWORD *)(v7 + 68) = v26;
  return 0;
}
