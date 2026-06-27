int __cdecl sub_6F77C560(int a1, int a2)
{
  int (__cdecl **v2)(_DWORD); // ebx@1
  int v3; // eax@1
  int v4; // ecx@4
  _DWORD *v5; // ebp@5
  int v6; // edi@5
  int i; // ebx@5
  signed int v8; // ST28_4@7
  int v9; // ST24_4@7
  int v10; // eax@7
  int v11; // ecx@7
  signed int v13; // [sp+20h] [bp-2Ch]@5
  int v14; // [sp+2Ch] [bp-20h]@4

  *(_DWORD *)(a1 + 44) = a2;
  sub_6F76C670(*(_DWORD *)a1, a2);
  v2 = *(int (__cdecl ***)(_DWORD))(*(_DWORD *)(*(_DWORD *)a1 + 656) + 2952);
  v3 = sub_6F76F030(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 96) + 4), "pshinter");
  if ( v3 )
  {
    if ( v2 )
    {
      if ( *v2 )
      {
        v4 = (*v2)(v3);
        v14 = v4;
        if ( v4 )
        {
          v5 = *(_DWORD **)(a1 + 40);
          v6 = *(_DWORD *)(*(_DWORD *)a1 + 656);
          v13 = *(_DWORD *)(v6 + 1392);
          (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v4 + 4))(
            *v5,
            *(_DWORD *)(a1 + 16),
            *(_DWORD *)(a1 + 20),
            0,
            0);
          for ( i = *(_DWORD *)(v6 + 1896);
                i;
                (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(v14 + 4))(v5[i + 1], v11, v10, 0, 0) )
          {
            if ( v13 == *(_DWORD *)(*(_DWORD *)(v6 + 4 * --i + 1900) + 68) )
            {
              v11 = *(_DWORD *)(a1 + 16);
              v10 = *(_DWORD *)(a1 + 20);
            }
            else
            {
              v8 = *(_DWORD *)(*(_DWORD *)(v6 + 4 * i + 1900) + 68);
              v9 = sub_6F7C9420(*(_DWORD *)(a1 + 16), v13, *(_DWORD *)(*(_DWORD *)(v6 + 4 * i + 1900) + 68));
              v10 = sub_6F7C9420(*(_DWORD *)(a1 + 20), v13, v8);
              v11 = v9;
            }
          }
        }
      }
    }
  }
  return 0;
}
