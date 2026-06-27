int __usercall sub_6F7747D0@<eax>(int result@<eax>)
{
  int v1; // esi@2
  int v2; // ebx@2
  int v3; // eax@2
  int v4; // edi@3
  int v5; // ebp@3
  unsigned int v6; // ecx@7
  int v7; // edx@7
  unsigned int v8; // edi@8
  int v9; // ebp@10
  int v10; // eax@10
  unsigned int v11; // ebp@12
  int v12; // eax@12
  int *v13; // edi@12
  int v14; // eax@13
  int v15; // eax@13
  unsigned int v16; // ebp@14
  int *v17; // edi@14
  int v18; // eax@15
  int v19; // eax@15
  unsigned int v20; // ebp@16
  int v21; // eax@16
  int v22; // edx@16
  int *v23; // edi@16
  int v24; // eax@17
  int v25; // eax@17
  int v26; // eax@19
  int v27; // ebp@19
  int v28; // edi@20
  int v29; // eax@22
  int v30; // eax@23
  int v31; // edi@23
  unsigned int v32; // ebp@24
  bool v33; // zf@26
  int v34; // eax@27
  int v35; // [sp+18h] [bp-24h]@3
  int v36; // [sp+18h] [bp-24h]@19
  int v37; // [sp+1Ch] [bp-20h]@2

  if ( result )
  {
    v1 = result;
    v2 = *(_DWORD *)(result + 278664);
    sub_6F773D90(v2, *(_DWORD *)result);
    v3 = *(_DWORD *)(v1 + 128);
    *(_DWORD *)v1 = 0;
    v37 = v3;
    if ( v3 )
    {
      v4 = 0;
      v5 = *(_DWORD *)(v3 + 12);
      v35 = *(_DWORD *)(v3 + 4);
      if ( *(_DWORD *)(v3 + 4) )
      {
        do
        {
          sub_6F773D90(v2, *(_DWORD *)(v5 + 4 * v4));
          *(_DWORD *)(v5 + 4 * v4++) = 0;
        }
        while ( v35 != v4 );
        v5 = *(_DWORD *)(v37 + 12);
      }
      sub_6F773D90(v2, v5);
      *(_DWORD *)(v37 + 12) = 0;
      sub_6F773D90(v2, *(_DWORD *)(v1 + 128));
      *(_DWORD *)(v1 + 128) = 0;
    }
    sub_6F773D90(v2, *(_DWORD *)(v1 + 84));
    v6 = *(_DWORD *)(v1 + 72);
    *(_DWORD *)(v1 + 84) = 0;
    v7 = *(_DWORD *)(v1 + 80);
    if ( v6 )
    {
      v8 = 0;
      do
      {
        while ( 1 )
        {
          v9 = 16 * v8;
          v10 = v7 + 16 * v8;
          if ( *(_DWORD *)(v10 + 4) == 1 )
            break;
          if ( ++v8 >= v6 )
            goto LABEL_12;
        }
        ++v8;
        sub_6F773D90(v2, *(_DWORD *)(v10 + 12));
        v7 = *(_DWORD *)(v1 + 80);
        *(_DWORD *)(v7 + v9 + 12) = 0;
        v6 = *(_DWORD *)(v1 + 72);
      }
      while ( v8 < v6 );
    }
LABEL_12:
    v11 = 0;
    sub_6F773D90(v2, v7);
    v12 = *(_DWORD *)(v1 + 52);
    *(_DWORD *)(v1 + 80) = 0;
    v13 = *(int **)(v1 + 56);
    if ( v12 )
    {
      do
      {
        v14 = *v13;
        ++v11;
        v13 += 9;
        sub_6F773D90(v2, v14);
        v15 = *(v13 - 3);
        *(v13 - 9) = 0;
        sub_6F773D90(v2, v15);
        *(v13 - 3) = 0;
      }
      while ( *(_DWORD *)(v1 + 52) > v11 );
    }
    v16 = 0;
    v17 = *(int **)(v1 + 68);
    if ( *(_DWORD *)(v1 + 64) )
    {
      do
      {
        v18 = *v17;
        ++v16;
        v17 += 9;
        sub_6F773D90(v2, v18);
        v19 = *(v17 - 3);
        *(v17 - 9) = 0;
        sub_6F773D90(v2, v19);
        *(v17 - 3) = 0;
      }
      while ( *(_DWORD *)(v1 + 64) > v16 );
    }
    v20 = 0;
    sub_6F773D90(v2, *(_DWORD *)(v1 + 56));
    v21 = *(_DWORD *)(v1 + 68);
    *(_DWORD *)(v1 + 56) = 0;
    sub_6F773D90(v2, v21);
    v22 = *(_DWORD *)(v1 + 112);
    *(_DWORD *)(v1 + 68) = 0;
    v23 = *(int **)(v1 + 104);
    if ( v22 )
    {
      do
      {
        v24 = *v23;
        ++v20;
        v23 += 9;
        sub_6F773D90(v2, v24);
        v25 = *(v23 - 3);
        *(v23 - 9) = 0;
        sub_6F773D90(v2, v25);
        *(v23 - 3) = 0;
      }
      while ( *(_DWORD *)(v1 + 112) > v20 );
      v23 = *(int **)(v1 + 104);
    }
    sub_6F773D90(v2, (int)v23);
    v26 = *(_DWORD *)(v1 + 278680);
    *(_DWORD *)(v1 + 104) = 0;
    v27 = *(_DWORD *)(v1 + 278688);
    v36 = v26;
    if ( v26 )
    {
      v28 = 0;
      do
      {
        sub_6F773D90(v2, *(_DWORD *)(v27 + 4 * v28));
        *(_DWORD *)(v27 + 4 * v28++) = 0;
      }
      while ( v36 != v28 );
      v29 = *(_DWORD *)(v1 + 278688);
    }
    else
    {
      v29 = *(_DWORD *)(v1 + 278688);
    }
    sub_6F773D90(v2, v29);
    v30 = *(_DWORD *)(v1 + 278672);
    *(_DWORD *)(v1 + 278688) = 0;
    v31 = *(_DWORD *)(v1 + 278668);
    if ( v30 )
    {
      v32 = 0;
      do
      {
        while ( 1 )
        {
          sub_6F773D90(v2, *(_DWORD *)v31);
          v33 = *(_DWORD *)(v31 + 4) == 1;
          *(_DWORD *)v31 = 0;
          if ( v33 )
            break;
          ++v32;
          v31 += 16;
          if ( *(_DWORD *)(v1 + 278672) <= v32 )
            goto LABEL_28;
        }
        v34 = *(_DWORD *)(v31 + 12);
        ++v32;
        v31 += 16;
        sub_6F773D90(v2, v34);
        *(_DWORD *)(v31 - 4) = 0;
      }
      while ( *(_DWORD *)(v1 + 278672) > v32 );
LABEL_28:
      v31 = *(_DWORD *)(v1 + 278668);
    }
    result = sub_6F773D90(v2, v31);
    *(_DWORD *)(v1 + 278668) = 0;
  }
  return result;
}
