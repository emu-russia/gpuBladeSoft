int __cdecl sub_6F860570(int a1, char a2)
{
  int (__cdecl **v2)(int, int); // eax@3
  int result; // eax@3
  int v4; // esi@4
  int v5; // edi@5
  int v6; // ST0C_4@6
  int v7; // eax@2
  int v8; // ebx@9
  const void *v9; // eax@10
  char *v10; // esi@11
  _DWORD *v11; // ecx@11
  int v12; // edx@11
  int v13; // [sp+20h] [bp-38h]@9
  int v14; // [sp+28h] [bp-30h]@9
  int v15; // [sp+2Ch] [bp-2Ch]@8
  char *v16; // [sp+34h] [bp-24h]@9
  int (__cdecl **v17)(int, int); // [sp+38h] [bp-20h]@3
  int v18; // [sp+3Ch] [bp-1Ch]@8

  if ( a2 )
  {
    v7 = *(_DWORD *)a1;
    *(_DWORD *)(v7 + 20) = 3;
    (*(void (__cdecl **)(int))v7)(a1);
  }
  v2 = (int (__cdecl **)(int, int))(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 64);
  v17 = v2;
  *(_DWORD *)(a1 + 380) = v2;
  *v2 = sub_6F86016C;
  result = *(_DWORD *)(a1 + 396);
  if ( *(_BYTE *)(result + 8) )
  {
    v17[1] = (int (__cdecl *)(int, int))sub_6F86038C;
    v18 = *(_DWORD *)(a1 + 256);
    result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 20 * *(_DWORD *)(a1 + 76) * v18);
    v15 = *(_DWORD *)(a1 + 84);
    if ( *(_DWORD *)(a1 + 76) > 0 )
    {
      v13 = 20 * v18;
      v16 = (char *)(result + 4 * v18);
      v14 = 0;
      v8 = result;
      while ( 1 )
      {
        v9 = (const void *)(*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 8))(
                             *(_DWORD *)(a1 + 4),
                             *(_DWORD *)(v15 + 28) * *(_DWORD *)(a1 + 260) * *(_DWORD *)(a1 + 252)
                           % *(_DWORD *)(v15 + 8));
        qmemcpy(v16, v9, 12 * v18);
        if ( v18 > 0 )
        {
          v10 = (char *)v9 + 8 * v18;
          v11 = (_DWORD *)(v8 + 16 * v18);
          v12 = 0;
          do
          {
            *(_DWORD *)(v8 + 4 * v12) = *(_DWORD *)v10;
            *v11 = *((_DWORD *)v9 + v12++);
            v10 += 4;
            ++v11;
          }
          while ( v12 != v18 );
        }
        v17[v14++ + 2] = (int (__cdecl *)(int, int))v16;
        result = 20 * v18;
        v16 += v13;
        if ( v14 >= *(_DWORD *)(a1 + 76) )
          break;
        v8 += v13;
        v15 += 88;
      }
    }
  }
  else
  {
    v17[1] = (int (__cdecl *)(int, int))sub_6F860208;
    v4 = *(_DWORD *)(a1 + 84);
    if ( *(_DWORD *)(a1 + 76) > 0 )
    {
      v5 = 0;
      do
      {
        v6 = *(_DWORD *)(a1 + 256);
        result = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 8))(
                   *(_DWORD *)(a1 + 4),
                   *(_DWORD *)(v4 + 28) * *(_DWORD *)(a1 + 260) * *(_DWORD *)(a1 + 252) % *(_DWORD *)(v4 + 8));
        v17[v5++ + 2] = (int (__cdecl *)(int, int))result;
        v4 += 88;
      }
      while ( *(_DWORD *)(a1 + 76) > v5 );
    }
  }
  return result;
}
