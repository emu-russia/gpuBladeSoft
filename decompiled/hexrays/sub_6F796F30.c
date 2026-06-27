int __usercall sub_6F796F30@<eax>(int a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, unsigned int a4, int a5, int a6, int a7)
{
  int *v7; // ebp@2
  int *v8; // ebx@2
  unsigned int v9; // eax@3
  int v10; // ebp@7
  int result; // eax@7
  int v12; // ebx@9
  int v13; // edi@9
  int v14; // ecx@9
  signed int v15; // edx@10
  int v16; // eax@10
  int v17; // ecx@10
  int v18; // edi@19
  unsigned int v19; // ebx@19
  int v20; // ecx@19
  int v21; // eax@20
  int v22; // esi@21
  int v23; // edx@21
  int v24; // ebp@25
  unsigned int v25; // edi@25
  int v26; // ecx@25
  int v27; // esi@26
  int v28; // eax@27
  int v29; // edx@27
  int v30; // [sp+1Ch] [bp-30h]@3
  int v31; // [sp+20h] [bp-2Ch]@4
  int v32; // [sp+24h] [bp-28h]@3
  signed int v33; // [sp+28h] [bp-24h]@7
  int v34; // [sp+2Ch] [bp-20h]@6

  if ( a7 )
  {
    v7 = (int *)(a1 + 1032);
    v8 = (int *)(a1 + 1548);
  }
  else
  {
    v7 = (int *)a1;
    v8 = (int *)(a1 + 516);
  }
  *v7 = 0;
  *v8 = 0;
  sub_6F796DF0(0, a2, a3, (int)v7, (int)v8);
  sub_6F796DF0(1u, a4, a5, (int)v7, (int)v8);
  v9 = *v7;
  v30 = *v7;
  v32 = *v8;
  if ( *v7 )
  {
    v24 = (int)(v7 + 1);
    v25 = v9;
    v26 = v24;
    do
    {
      v27 = *(_DWORD *)v26;
      if ( v25 <= 1 )
      {
        v28 = *(_DWORD *)(v26 + 4);
      }
      else
      {
        v28 = *(_DWORD *)(v26 + 4);
        v29 = *(_DWORD *)(v26 + 32) - v27;
        if ( v29 < v28 )
        {
          *(_DWORD *)(v26 + 4) = v29;
          v28 = v29;
        }
      }
      *(_DWORD *)(v26 + 12) = v27;
      v26 += 32;
      *(_DWORD *)(v26 - 24) = v27 + v28;
      --v25;
    }
    while ( v25 );
    v31 = v24;
  }
  else
  {
    v31 = (int)(v7 + 1);
  }
  if ( v32 )
  {
    v18 = (int)(v8 + 1);
    v19 = v32;
    v20 = v18;
    do
    {
      v21 = *(_DWORD *)v20;
      if ( v19 <= 1 )
      {
        v23 = *(_DWORD *)(v20 + 4);
      }
      else
      {
        v22 = v21 - *(_DWORD *)(v20 + 32);
        v23 = *(_DWORD *)(v20 + 4);
        if ( v22 > v23 )
        {
          *(_DWORD *)(v20 + 4) = v22;
          v23 = v22;
        }
      }
      *(_DWORD *)(v20 + 8) = v21;
      v20 += 32;
      *(_DWORD *)(v20 - 20) = v23 + v21;
      --v19;
    }
    while ( v19 );
    v34 = v18;
  }
  else
  {
    v34 = (int)(v8 + 1);
  }
  v33 = 2;
  v10 = 2 * a6;
  result = v30;
  while ( 1 )
  {
    if ( result )
    {
      v12 = v31;
      *(_DWORD *)(v12 + 12) -= a6;
      v13 = result - 1;
      v14 = *(_DWORD *)(v31 + 8);
      if ( result != 1 )
      {
        do
        {
          v15 = *(_DWORD *)(v12 + 44) - v14;
          v16 = v14 + v15 / 2;
          v17 = a6 + v14;
          if ( v15 < v10 )
            v17 = v16;
          *(_DWORD *)(v12 + 8) = v17;
          if ( v15 >= v10 )
            v16 = *(_DWORD *)(v12 + 44) - a6;
          v12 += 32;
          *(_DWORD *)(v12 + 12) = v16;
          --v13;
          v14 = *(_DWORD *)(v12 + 8);
        }
        while ( v13 );
        v31 += 32 * (v30 + 0x7FFFFFF);
      }
      result = v31;
      *(_DWORD *)(v31 + 8) = a6 + v14;
    }
    if ( !--v33 )
      break;
    v31 = v34;
    result = v32;
    v30 = v32;
  }
  return result;
}
