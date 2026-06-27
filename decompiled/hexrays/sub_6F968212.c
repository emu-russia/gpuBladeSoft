char __usercall sub_6F968212@<al>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5)
{
  int v5; // ebx@1
  int v6; // eax@2
  int v7; // edx@2
  int v8; // edi@2
  int v9; // ecx@2
  int v10; // esi@3
  int v11; // ebp@3
  int v12; // ebp@10
  int v13; // esi@10
  int v14; // eax@11
  int v15; // eax@13
  char v16; // cl@14
  bool v17; // zf@16
  char v18; // bp@16
  unsigned int v20; // [sp+18h] [bp-24h]@1
  int v21; // [sp+1Ch] [bp-20h]@2

  v5 = a1;
  *(_DWORD *)(a1 + 188) = a2;
  *(_DWORD *)(a1 + 192) = a3;
  v20 = a1 + 180;
  *(_DWORD *)(a1 + 52) = a1 + 180;
  *(_DWORD *)(v5 + 196) = *(_DWORD *)(v5 + 68);
  *(_DWORD *)(v5 + 200) = *(_DWORD *)(v5 + 72);
  *(_DWORD *)(a1 + 180) = a4;
  *(_DWORD *)(a1 + 184) = a5;
  do
  {
    v6 = *(_DWORD *)(v5 + 52);
    v7 = *(_DWORD *)(v6 + 20);
    v8 = *(_DWORD *)(v6 + 4);
    v9 = *(_DWORD *)(v6 + 12);
    v21 = *(_DWORD *)v6;
    if ( v7 <= v8 )
    {
      v10 = *(_DWORD *)(v6 + 4);
      v11 = *(_DWORD *)(v6 + 20);
    }
    else
    {
      v10 = *(_DWORD *)(v6 + 20);
      v11 = *(_DWORD *)(v6 + 4);
    }
    if ( v11 <= v9 && v10 >= v9 )
    {
      if ( v7 == v8 )
      {
        *(_DWORD *)(v5 + 52) = v6 - 16;
      }
      else
      {
        v12 = *(_DWORD *)(v5 + 100);
        v13 = (v7 >= v8) + 1;
        if ( v13 != v12 )
        {
          v15 = *(_DWORD *)(v5 + 4);
          v16 = v13 == 1 ? ((v7 + v15 - 1) & -v15) - v7 >= *(_DWORD *)(v5 + 8) : (v7 & (v15 - 1)) >= *(_DWORD *)(v5 + 8);
          v17 = v12 == 0;
          v18 = v16;
          if ( !v17 )
          {
            if ( sub_6F967F5A(v5, v16) )
              return 1;
          }
          if ( sub_6F967E9C(v5, v13, v18) )
            return 1;
        }
        v14 = *(_DWORD *)(v5 + 76);
        if ( v13 == 1 )
        {
          if ( sub_6F968036(v5, 2, (void (__cdecl *)(unsigned int))sub_6F79C450, v14, *(_DWORD *)(v5 + 80)) )
            return 1;
        }
        else if ( sub_6F9681BC(v5, 2, (void (__cdecl *)(unsigned int))sub_6F79C450, v14, *(_DWORD *)(v5 + 80)) )
        {
          return 1;
        }
      }
    }
    else
    {
      sub_6F79C450(v6);
      *(_DWORD *)(v5 + 52) += 16;
    }
  }
  while ( v20 <= *(_DWORD *)(v5 + 52) );
  *(_DWORD *)(v5 + 72) = v8;
  *(_DWORD *)(v5 + 68) = v21;
  return 0;
}
