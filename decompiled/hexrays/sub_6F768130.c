signed int __cdecl sub_6F768130(int a1, _DWORD *a2)
{
  signed int v2; // ebx@1
  void *v3; // eax@3
  int *v4; // ebp@3
  int v5; // eax@5
  signed int v6; // ecx@6
  const char *v7; // edx@6
  void *v8; // eax@7
  int v9; // edi@7
  int v10; // eax@8
  int v11; // eax@8
  int v13; // ebx@14
  void (__cdecl *v14)(int); // edx@14
  int v15; // ST1C_4@15
  int v16; // ST1C_4@16
  const char *v17; // [sp+1Ch] [bp-30h]@7
  int v18; // [sp+2Ch] [bp-20h]@7

  v2 = 37;
  if ( a1 )
  {
    v2 = 6;
    if ( a2 )
    {
      v3 = *(void **)(a1 + 72);
      v4 = *(int **)a1;
      if ( v3 == (void *)1651078259 )
      {
        v6 = 52;
        v7 = (const char *)&unk_6FB55680;
      }
      else if ( v3 == &loc_6F75746C )
      {
        v6 = 40;
        v7 = "(";
      }
      else
      {
        v5 = sub_6F76DE40((int)v4, (int)v3, 0);
        if ( !v5 )
          return 18;
        v6 = *(_DWORD *)(v5 + 20);
        v7 = (const char *)(v5 + 20);
      }
      v17 = v7;
      v8 = sub_6F773A50(*v4, v6, &v18);
      v2 = v18;
      v9 = (int)v8;
      if ( !v18 )
      {
        v10 = *((_DWORD *)v17 + 1);
        *(_DWORD *)v9 = v4;
        *(_DWORD *)(v9 + 4) = v17;
        *(_DWORD *)(v9 + 8) = v10;
        *(_DWORD *)(v9 + 12) = *(_DWORD *)(a1 + 64) << 10;
        *(_DWORD *)(v9 + 16) = *(_DWORD *)(a1 + 68) << 10;
        v11 = (*((int (__cdecl **)(int, int))v17 + 2))(v9, a1);
        if ( v11 )
        {
          v13 = **(_DWORD **)v9;
          v14 = *(void (__cdecl **)(int))(*(_DWORD *)(v9 + 4) + 12);
          if ( v14 )
          {
            v15 = v11;
            v14(v9);
            v11 = v15;
          }
          v16 = v11;
          sub_6F773D90(v13, v9);
          v2 = v16;
        }
        else
        {
          *a2 = v9;
        }
      }
    }
  }
  return v2;
}
