signed int __cdecl sub_6F791A30(int a1, int a2, char *a3, size_t a4)
{
  signed int result; // eax@1
  int v5; // ecx@4
  unsigned int v6; // ebx@4
  char *v7; // ebp@5
  char *v8; // eax@5
  bool v9; // cf@6
  bool v10; // zf@6
  char *v11; // eax@6
  char *v12; // eax@10
  char *v13; // edx@10
  char *v14; // eax@11
  _DWORD *v15; // eax@12
  unsigned int i; // ecx@12
  signed int v17; // [sp+10h] [bp-3Ch]@8
  int v18; // [sp+14h] [bp-38h]@10
  int v19; // [sp+18h] [bp-34h]@12
  int v20; // [sp+2Ch] [bp-20h]@10

  result = 6;
  if ( a2 >= 0 && a2 < *(_DWORD *)(a1 + 16) )
  {
    v5 = *(_DWORD *)(a1 + 4);
    v6 = *(_DWORD *)(a1 + 8);
    if ( v5 + a4 <= v6 )
    {
      v14 = *(char **)a1;
    }
    else
    {
      v7 = *(char **)a1;
      v8 = &a3[-*(_DWORD *)a1];
      if ( (signed int)&a3[-*(_DWORD *)a1] < 0 )
      {
        v17 = -1;
      }
      else
      {
        v9 = v6 < (unsigned int)v8;
        v10 = v6 == (_DWORD)v8;
        v11 = (char *)-1;
        if ( !v9 && !v10 )
          v11 = &a3[-*(_DWORD *)a1];
        v17 = (signed int)v11;
      }
      do
        v6 = (v6 + (v6 >> 2) + 1024) & 0xFFFFFC00;
      while ( v5 + a4 > v6 );
      v18 = *(_DWORD *)(a1 + 32);
      v12 = (char *)sub_6F773A50(*(_DWORD *)(a1 + 32), v6, &v20);
      v13 = v12;
      *(_DWORD *)a1 = v12;
      result = v20;
      if ( v20 )
      {
        *(_DWORD *)a1 = v7;
        return result;
      }
      v14 = v13;
      if ( v7 )
      {
        memcpy(v13, v7, *(_DWORD *)(a1 + 8));
        v19 = *(_DWORD *)a1 - (_DWORD)v7;
        v15 = *(_DWORD **)(a1 + 24);
        for ( i = (unsigned int)&v15[*(_DWORD *)(a1 + 16)]; i > (unsigned int)v15; ++v15 )
        {
          if ( *v15 )
            *v15 += v19;
        }
        sub_6F773D90(v18, (int)v7);
        v14 = *(char **)a1;
      }
      *(_DWORD *)(a1 + 8) = v6;
      if ( v17 != -1 )
        a3 = &v14[v17];
      v5 = *(_DWORD *)(a1 + 4);
    }
    *(_DWORD *)(*(_DWORD *)(a1 + 24) + 4 * a2) = &v14[v5];
    *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * a2) = a4;
    memcpy((void *)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 4)), a3, a4);
    *(_DWORD *)(a1 + 4) += a4;
    result = 0;
  }
  return result;
}
