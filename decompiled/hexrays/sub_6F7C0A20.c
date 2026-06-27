int __usercall sub_6F7C0A20@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int v4; // esi@1
  unsigned int v5; // edi@1
  signed int v6; // esi@3
  unsigned int v7; // ebx@3
  int v8; // edx@3
  signed int v9; // ecx@3
  signed int v10; // ecx@5
  unsigned int v11; // ecx@11
  int v12; // edi@12
  int v13; // esi@13
  signed int v14; // edx@15
  signed int v15; // ebp@15
  signed int v16; // ebp@19
  int v17; // eax@20
  unsigned int v18; // edi@26
  int v19; // eax@33
  signed int v20; // ebp@35
  signed int v21; // esi@35
  signed int v22; // ebp@39
  int v23; // esi@40
  int v24; // edi@40
  int v25; // esi@43
  unsigned int v26; // [sp+0h] [bp-30h]@1
  int v27; // [sp+4h] [bp-2Ch]@11
  int v28; // [sp+8h] [bp-28h]@32
  int v29; // [sp+Ch] [bp-24h]@8
  signed int v30; // [sp+10h] [bp-20h]@7
  signed int v31; // [sp+14h] [bp-1Ch]@1
  unsigned int v32; // [sp+18h] [bp-18h]@8
  int v33; // [sp+1Ch] [bp-14h]@7

  v31 = 0;
  v4 = result + 1468 * a4;
  v5 = *(_DWORD *)(v4 + 52);
  v26 = v5 + 48 * *(_DWORD *)(v4 + 44);
  if ( a2 )
    v31 = *(_DWORD *)(a3 + 12 * a2 - 12);
  v6 = 1;
  v7 = v5;
  v8 = *(_DWORD *)(*(_DWORD *)(result + 2988) + 40);
  v9 = v8 + 255;
  if ( v8 >= 0 )
    v9 = *(_DWORD *)(*(_DWORD *)(result + 2988) + 40);
  v10 = v9 >> 8;
  if ( v10 )
    v6 = v10;
  v30 = v6;
  v33 = 6000 * v8 / 2048;
  if ( v5 < v26 )
  {
    v32 = v5;
    v29 = 1468 * a4 + result;
    while ( 1 )
    {
      while ( *(_BYTE *)(v7 + 1) != *(_DWORD *)(v29 + 68) )
      {
LABEL_9:
        v7 += 48;
        if ( v26 <= v7 )
          goto LABEL_26;
      }
      v11 = v32;
      v27 = *(_WORD *)(v7 + 2);
      if ( v31 )
      {
        v28 = *(_BYTE *)(v7 + 1);
        do
        {
          v19 = *(_WORD *)(v11 + 2);
          if ( !(v28 + *(_BYTE *)(v11 + 1)) && v19 > v27 )
          {
            v20 = *(_WORD *)(v11 + 6);
            v21 = *(_WORD *)(v7 + 4);
            if ( *(_WORD *)(v7 + 6) <= v20 )
              v20 = *(_WORD *)(v7 + 6);
            if ( v21 < *(_WORD *)(v11 + 4) )
              v21 = *(_WORD *)(v11 + 4);
            v22 = v20 - v21;
            if ( v30 <= v22 )
            {
              v23 = 32000;
              v24 = ((v19 - v27) << 10) / v31 - 1024;
              if ( v24 <= 10000 )
              {
                v23 = 0;
                if ( v24 > 0 )
                  v23 = v24 * v24 / 3000;
              }
              v25 = v33 / v22 + v23;
              if ( v25 < *(_DWORD *)(v7 + 32) )
              {
                *(_DWORD *)(v7 + 32) = v25;
                *(_DWORD *)(v7 + 20) = v11;
              }
              if ( v25 < *(_DWORD *)(v11 + 32) )
              {
                *(_DWORD *)(v11 + 32) = v25;
                *(_DWORD *)(v11 + 20) = v7;
              }
            }
          }
          v11 += 48;
        }
        while ( v26 > v11 );
        goto LABEL_9;
      }
      v12 = *(_BYTE *)(v7 + 1);
      do
      {
        v13 = *(_WORD *)(v11 + 2);
        if ( !(v12 + *(_BYTE *)(v11 + 1)) && v13 > v27 )
        {
          v14 = *(_WORD *)(v11 + 4);
          v15 = *(_WORD *)(v7 + 6);
          if ( *(_WORD *)(v11 + 6) <= v15 )
            v15 = *(_WORD *)(v11 + 6);
          if ( v14 < *(_WORD *)(v7 + 4) )
            v14 = *(_WORD *)(v7 + 4);
          v16 = v15 - v14;
          if ( v30 <= v16 )
          {
            v17 = v13 - v27 + v33 / v16;
            if ( *(_DWORD *)(v7 + 32) > v17 )
            {
              *(_DWORD *)(v7 + 32) = v17;
              *(_DWORD *)(v7 + 20) = v11;
            }
            if ( *(_DWORD *)(v11 + 32) > v17 )
            {
              *(_DWORD *)(v11 + 32) = v17;
              *(_DWORD *)(v11 + 20) = v7;
            }
          }
        }
        v11 += 48;
      }
      while ( v26 > v11 );
      v7 += 48;
      if ( v26 <= v7 )
      {
LABEL_26:
        v18 = v32;
        do
        {
          result = *(_DWORD *)(v18 + 20);
          if ( result )
          {
            if ( *(_DWORD *)(result + 20) != v18 )
            {
              *(_DWORD *)(v18 + 20) = 0;
              result = *(_DWORD *)(result + 20);
              *(_DWORD *)(v18 + 24) = result;
            }
          }
          v18 += 48;
        }
        while ( v26 > v18 );
        return result;
      }
    }
  }
  return result;
}
