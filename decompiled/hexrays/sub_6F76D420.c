signed int __cdecl sub_6F76D420(int a1, int a2, int a3, _DWORD *a4)
{
  signed int result; // eax@3
  int v5; // ebp@5
  int v6; // edi@6
  _DWORD *v7; // edx@6
  int v8; // eax@7
  int (__cdecl *v9)(_DWORD *, int); // eax@7
  _DWORD *v10; // ST2C_4@8
  int v11; // ebx@9
  void (__cdecl *v12)(_DWORD); // eax@9
  _DWORD *v13; // ST2C_4@10
  char *v14; // eax@14
  char *v15; // ebx@14
  int v16; // esi@15
  _DWORD *v17; // [sp+2Ch] [bp-30h]@14
  int v18; // [sp+3Ch] [bp-20h]@1

  v18 = 0;
  if ( a1 && a3 )
  {
    v5 = *(_DWORD *)a3;
    result = 6;
    if ( *(_DWORD *)a3 )
    {
      v6 = *(_DWORD *)(v5 + 100);
      v7 = sub_6F773A50(*(_DWORD *)(v5 + 100), *(_DWORD *)a1, &v18);
      result = v18;
      if ( !v18 )
      {
        *v7 = *(_DWORD *)a3;
        v7[1] = *(_DWORD *)(a3 + 4);
        v8 = *(_DWORD *)(a3 + 8);
        v7[3] = a1;
        v7[2] = v8;
        v9 = *(int (__cdecl **)(_DWORD *, int))(a1 + 4);
        if ( v9 && (v10 = v7, v18 = v9(v7, a2), v7 = v10, v18)
          || (v17 = v7,
              v14 = sub_6F773B30(v6, 4, *(_DWORD *)(v5 + 36), *(_DWORD *)(v5 + 36) + 1, *(char **)(v5 + 40), &v18),
              v15 = v14,
              *(_DWORD *)(v5 + 40) = v14,
              result = v18,
              v7 = v17,
              v18) )
        {
          v11 = *(_DWORD *)(*v7 + 100);
          v12 = *(void (__cdecl **)(_DWORD))(v7[3] + 8);
          if ( v12 )
          {
            v13 = v7;
            v12(v7);
            v7 = v13;
          }
          sub_6F773D90(v11, (int)v7);
          result = v18;
          v7 = 0;
        }
        else
        {
          v16 = *(_DWORD *)(v5 + 36);
          *(_DWORD *)(v5 + 36) = v16 + 1;
          *(_DWORD *)&v15[4 * v16] = v17;
        }
      }
      if ( a4 )
        *a4 = v7;
    }
  }
  else
  {
    result = 6;
  }
  return result;
}
