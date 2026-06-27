int __cdecl sub_6F7B78A0(int a1, int a2)
{
  int v2; // ebp@4
  signed int v3; // eax@5
  int result; // eax@7
  int v5; // esi@9
  char *v6; // edi@9
  int v7; // edx@9
  int v8; // ecx@9
  int v9; // eax@10
  int v10; // ST14_4@10
  int *v11; // ebp@10
  int v12; // eax@10
  bool v13; // zf@10
  bool v14; // sf@10
  unsigned __int8 v15; // of@10
  int v16; // [sp+18h] [bp-134h]@10
  int v17; // [sp+1Ch] [bp-130h]@4
  char *v18; // [sp+20h] [bp-12Ch]@4
  unsigned int v19; // [sp+24h] [bp-128h]@4
  int v20; // [sp+28h] [bp-124h]@4
  int v21; // [sp+2Ch] [bp-120h]@4
  int v22; // [sp+38h] [bp-114h]@1
  unsigned int v23; // [sp+3Ch] [bp-110h]@5
  char v24; // [sp+40h] [bp-10Ch]@5
  char v25; // [sp+70h] [bp-DCh]@1

  (*(void (__cdecl **)(int, char *, signed int, int *))(a2 + 60))(a2, &v25, 16, &v22);
  if ( v22 < 0 )
  {
    result = 162;
    *(_DWORD *)(a2 + 12) = 162;
  }
  else if ( v22 && v22 <= 16 )
  {
    v18 = &v25;
    v17 = 0;
    v19 = 0;
    v20 = *(_DWORD *)a2;
    v21 = *(_DWORD *)(a2 + 8);
    v2 = *(_DWORD *)(a1 + 528);
    do
    {
      *(_DWORD *)a2 = *(_DWORD *)v18;
      *(_DWORD *)(a2 + 8) = *((_DWORD *)v18 + 1);
      (*(void (__cdecl **)(int, char *, signed int, int *))(a2 + 60))(a2, &v24, 4, (int *)&v23);
      v3 = v23;
      if ( v17 )
      {
        if ( v23 != v19 )
          goto LABEL_15;
      }
      else
      {
        v19 = v23;
        if ( v23 - 1 > 3 )
          goto LABEL_15;
        result = sub_6F7B7100(a1, v22, v23);
        if ( result )
          goto LABEL_16;
        v2 = *(_DWORD *)(a1 + 528);
        v3 = v23;
      }
      v5 = 0;
      v6 = &v24;
      v7 = v2;
      v8 = v17 + 4;
      if ( v3 > 0 )
      {
        do
        {
          v9 = *(_DWORD *)v6;
          v16 = v7;
          v6 += 12;
          v10 = v8;
          *(_DWORD *)a2 = v9;
          *(_DWORD *)(a2 + 8) = *((_DWORD *)v6 - 2);
          v11 = (int *)(*(_DWORD *)(v7 + 4 * v8 + 8) + 4 * v5++);
          v12 = (*(int (__cdecl **)(int, _DWORD))(a2 + 40))(a2, 0);
          v15 = __OFSUB__(v23, v5);
          v13 = v23 == v5;
          v14 = ((v23 - v5) & 0x80000000) != 0;
          *v11 = v12;
          v8 = v10;
          v7 = v16;
        }
        while ( !((unsigned __int8)(v14 ^ v15) | v13) );
        v2 = v16;
      }
      ++v17;
      v18 += 12;
    }
    while ( v22 > v17 );
    *(_DWORD *)a2 = v20;
    *(_DWORD *)(a2 + 8) = v21;
    result = 0;
    *(_DWORD *)(a2 + 12) = 0;
  }
  else
  {
LABEL_15:
    result = 3;
LABEL_16:
    *(_DWORD *)(a2 + 12) = result;
  }
  return result;
}
