void __cdecl sub_6F79A9F0(int a1, int a2, signed int a3, int a4)
{
  int v4; // ebp@2
  signed int v5; // eax@3
  int v6; // esi@5
  int v7; // ebx@5
  signed int v8; // eax@6
  signed int v9; // eax@26
  int *v10; // ebx@26
  unsigned int *v11; // esi@28
  int v12; // eax@29
  signed int v13; // [sp+18h] [bp-A4h]@5
  int v14; // [sp+20h] [bp-9Ch]@6
  int v15; // [sp+24h] [bp-98h]@7
  int v16; // [sp+28h] [bp-94h]@8
  int v17; // [sp+2Ch] [bp-90h]@8
  int v18; // [sp+30h] [bp-8Ch]@9
  int v19; // [sp+34h] [bp-88h]@9
  int v20; // [sp+38h] [bp-84h]@10
  int v21; // [sp+3Ch] [bp-80h]@10
  int v22; // [sp+40h] [bp-7Ch]@11
  int v23; // [sp+44h] [bp-78h]@11
  int v24; // [sp+48h] [bp-74h]@12
  int v25; // [sp+4Ch] [bp-70h]@12
  int v26; // [sp+50h] [bp-6Ch]@13
  int v27; // [sp+54h] [bp-68h]@13
  int v28; // [sp+58h] [bp-64h]@14
  int v29; // [sp+5Ch] [bp-60h]@14
  int v30; // [sp+60h] [bp-5Ch]@15
  int v31; // [sp+64h] [bp-58h]@15
  int v32; // [sp+68h] [bp-54h]@16
  int v33; // [sp+6Ch] [bp-50h]@16
  int v34; // [sp+70h] [bp-4Ch]@17
  int v35; // [sp+74h] [bp-48h]@17
  int v36; // [sp+78h] [bp-44h]@18
  int v37; // [sp+7Ch] [bp-40h]@18
  int v38; // [sp+80h] [bp-3Ch]@19
  int v39; // [sp+84h] [bp-38h]@19
  int v40; // [sp+88h] [bp-34h]@20
  int v41; // [sp+8Ch] [bp-30h]@20
  int v42; // [sp+90h] [bp-2Ch]@21
  int v43; // [sp+94h] [bp-28h]@21
  int v44; // [sp+98h] [bp-24h]@22
  int v45; // [sp+9Ch] [bp-20h]@22

  if ( a3 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = 16;
      if ( a3 <= 16 )
        v5 = a3;
      v6 = 0;
      v7 = 2 * v5;
      v13 = v5;
      do
      {
        v4 += *(_DWORD *)(a4 + 4 * v6);
        LOWORD(v8) = sub_6F7C9390(v4);
        *(&v14 + v6++) = v8 >> 16;
      }
      while ( v6 != v7 );
      v15 -= v14;
      if ( v7 != 2 )
      {
        v17 -= v16;
        if ( v7 > 4 )
        {
          v19 -= v18;
          if ( v7 > 6 )
          {
            v21 -= v20;
            if ( v7 > 8 )
            {
              v23 -= v22;
              if ( v7 > 10 )
              {
                v25 -= v24;
                if ( v7 > 12 )
                {
                  v27 -= v26;
                  if ( v7 > 14 )
                  {
                    v29 -= v28;
                    if ( v7 > 16 )
                    {
                      v31 -= v30;
                      if ( v7 > 18 )
                      {
                        v33 -= v32;
                        if ( v7 > 20 )
                        {
                          v35 -= v34;
                          if ( v7 > 22 )
                          {
                            v37 -= v36;
                            if ( v7 > 24 )
                            {
                              v39 -= v38;
                              if ( v7 > 26 )
                              {
                                v41 -= v40;
                                if ( v7 > 28 )
                                {
                                  v43 -= v42;
                                  if ( v7 > 30 )
                                    v45 -= v44;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( !*(_DWORD *)(a1 + 4) )
      {
        v9 = 1;
        v10 = &v14;
        if ( !a2 )
          v9 = 0;
        v11 = (unsigned int *)(a1 + 36 * v9 + 16);
        while ( 1 )
        {
          v12 = sub_6F79A730(v11, *v10, v10[1], *(_DWORD *)a1);
          if ( v12 )
            break;
          v10 += 2;
          if ( v10 == &v14 + 2 * v13 )
            goto LABEL_24;
        }
        *(_DWORD *)(a1 + 4) = v12;
      }
LABEL_24:
      a3 -= v13;
    }
    while ( a3 > 0 );
  }
}
