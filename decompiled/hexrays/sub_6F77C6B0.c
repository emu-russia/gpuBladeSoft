int __cdecl sub_6F77C6B0(int a1, int a2)
{
  int v2; // eax@1
  int (__cdecl **v3)(_DWORD); // ebx@4
  int v4; // eax@4
  int v5; // ecx@7
  _DWORD *v6; // ebp@8
  int v7; // edi@8
  int i; // ebx@8
  signed int v9; // ST28_4@10
  int v10; // ST24_4@10
  int v11; // eax@10
  int v12; // ecx@10
  signed int v14; // [sp+20h] [bp-3Ch]@8
  int v15; // [sp+2Ch] [bp-30h]@7
  int v16; // [sp+3Ch] [bp-20h]@2

  v2 = *(_DWORD *)a1;
  if ( *(_BYTE *)(*(_DWORD *)a1 + 8) & 2 )
  {
    if ( !(*(int (__cdecl **)(int, int, int *))(*(_DWORD *)(v2 + 532) + 104))(v2, a2, &v16) )
      return sub_6F77C560(a1, v16);
    v2 = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 44) = -1;
  }
  sub_6F76C770(v2, a2);
  v3 = *(int (__cdecl ***)(_DWORD))(*(_DWORD *)(*(_DWORD *)a1 + 656) + 2952);
  v4 = sub_6F76F030(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 96) + 4), "pshinter");
  if ( v4 )
  {
    if ( v3 )
    {
      if ( *v3 )
      {
        v5 = (*v3)(v4);
        v15 = v5;
        if ( v5 )
        {
          v6 = *(_DWORD **)(a1 + 40);
          v7 = *(_DWORD *)(*(_DWORD *)a1 + 656);
          v14 = *(_DWORD *)(v7 + 1392);
          (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v5 + 4))(
            *v6,
            *(_DWORD *)(a1 + 16),
            *(_DWORD *)(a1 + 20),
            0,
            0);
          for ( i = *(_DWORD *)(v7 + 1896);
                i;
                (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(v15 + 4))(v6[i + 1], v12, v11, 0, 0) )
          {
            if ( v14 == *(_DWORD *)(*(_DWORD *)(v7 + 4 * --i + 1900) + 68) )
            {
              v12 = *(_DWORD *)(a1 + 16);
              v11 = *(_DWORD *)(a1 + 20);
            }
            else
            {
              v9 = *(_DWORD *)(*(_DWORD *)(v7 + 4 * i + 1900) + 68);
              v10 = sub_6F7C9420(*(_DWORD *)(a1 + 16), v14, *(_DWORD *)(*(_DWORD *)(v7 + 4 * i + 1900) + 68));
              v11 = sub_6F7C9420(*(_DWORD *)(a1 + 20), v14, v9);
              v12 = v10;
            }
          }
        }
      }
    }
  }
  return 0;
}
