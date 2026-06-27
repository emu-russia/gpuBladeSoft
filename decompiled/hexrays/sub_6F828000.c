signed int __cdecl sub_6F828000(int a1, int *a2, int a3, int a4, int a5, const char *a6, int a7, int a8)
{
  int v8; // edx@2
  signed int result; // eax@5
  signed int v10; // ebx@8
  int v11; // eax@9
  signed int v12; // edx@10
  int v13; // ebx@10
  int v14; // ebx@14
  const char *v15; // ebp@14
  const char *v16; // ebx@15
  int v17; // eax@23
  int v18; // edx@24
  int v19; // ecx@25
  int v20; // eax@26
  int v21; // edx@27
  int v22; // ecx@28
  int v23; // eax@29
  int v24; // edx@30
  int v25; // ebp@31
  int v26; // ebx@33
  _BYTE *v27; // edx@33
  _BYTE *v28; // ebx@34
  int v29; // edx@43
  int v30; // ecx@44
  int v31; // eax@45
  int v32; // edx@46
  int v33; // ecx@47
  int v34; // eax@48
  int v35; // edx@49
  int v36; // [sp+14h] [bp-28h]@15
  int v37; // [sp+14h] [bp-28h]@34
  int v38; // [sp+18h] [bp-24h]@34
  int v39; // [sp+1Ch] [bp-20h]@34

  if ( a8 )
  {
    v8 = *a2;
    if ( *a2 != -2 )
    {
      if ( v8 != -1 )
      {
        if ( v8 != -3 )
          return 0;
        if ( !a1 )
          return -1;
        sub_6F8332B0(a3);
        sub_6F832980(a3, 128, 8u);
        sub_6F832980(a3, 116, 8u);
        sub_6F832980(a3, 104, 8u);
        sub_6F832980(a3, 101, 8u);
        sub_6F832980(a3, 111, 8u);
        sub_6F832980(a3, 114, 8u);
        sub_6F832980(a3, 97, 8u);
        sub_6F832980(a3, 3, 8u);
        sub_6F832980(a3, 2, 8u);
        sub_6F832980(a3, 1, 8u);
        sub_6F832980(a3, *(_DWORD *)(a1 + 4) >> 4, 0x10u);
        sub_6F832980(a3, *(_DWORD *)(a1 + 8) >> 4, 0x10u);
        sub_6F832980(a3, *(_DWORD *)(a1 + 12), 0x18u);
        sub_6F832980(a3, *(_DWORD *)(a1 + 16), 0x18u);
        sub_6F832980(a3, *(_DWORD *)(a1 + 20), 8u);
        sub_6F832980(a3, *(_DWORD *)(a1 + 24), 8u);
        sub_6F832980(a3, *(_DWORD *)(a1 + 28), 0x20u);
        sub_6F832980(a3, *(_DWORD *)(a1 + 32), 0x20u);
        sub_6F832980(a3, *(_DWORD *)(a1 + 36), 0x18u);
        sub_6F832980(a3, *(_DWORD *)(a1 + 40), 0x18u);
        sub_6F832980(a3, *(_DWORD *)(a1 + 44), 8u);
        sub_6F832980(a3, *(_DWORD *)(a1 + 52), 0x18u);
        sub_6F832980(a3, *(_DWORD *)(a1 + 56), 6u);
        sub_6F832980(a3, *(_DWORD *)(a1 + 60), 5u);
        v10 = 1;
        sub_6F832980(a3, *(_DWORD *)(a1 + 48), 2u);
        sub_6F832980(a3, 0, 3u);
        goto LABEL_9;
      }
      sub_6F8332B0(a3);
      sub_6F832980(a3, 130, 8u);
      sub_6F832980(a3, 116, 8u);
      sub_6F832980(a3, 104, 8u);
      sub_6F832980(a3, 101, 8u);
      sub_6F832980(a3, 111, 8u);
      sub_6F832980(a3, 114, 8u);
      sub_6F832980(a3, 97, 8u);
      sub_6F807D20(a3, a4);
      result = sub_6F809240(a3, a5);
      if ( result < 0 )
        return result;
LABEL_8:
      v10 = 0;
LABEL_9:
      v11 = sub_6F833A60(a3);
      if ( v11 )
      {
        *(_DWORD *)a8 = v11;
        *(_DWORD *)(a8 + 4) = sub_6F833A20(a3);
        *(_DWORD *)(a8 + 8) = v10;
        *(_DWORD *)(a8 + 12) = 0;
        *(_DWORD *)(a8 + 16) = 0;
        *(_DWORD *)(a8 + 20) = 0;
        v12 = *a2 + 3;
        v13 = *a2 + 1;
        result = *a2 + 4;
        *(_DWORD *)(a8 + 24) = v12;
        *(_DWORD *)(a8 + 28) = v12 >> 31;
        *a2 = v13;
        return result;
      }
      return -1;
    }
    if ( a7 )
    {
      v14 = strlen(a6);
      sub_6F8332B0(a3);
      sub_6F832980(a3, 129, 8u);
      sub_6F832980(a3, 116, 8u);
      sub_6F832980(a3, 104, 8u);
      sub_6F832980(a3, 101, 8u);
      sub_6F832980(a3, 111, 8u);
      sub_6F832980(a3, 114, 8u);
      sub_6F832980(a3, 97, 8u);
      sub_6F832820(a3, v14, 0x20u);
      v15 = &a6[v14];
      if ( v14 > 0 )
      {
        v36 = ((_BYTE)v15 + ~(_BYTE)a6) & 7;
        sub_6F832980(a3, *a6, 8u);
        v16 = a6 + 1;
        if ( a6 + 1 != v15 )
        {
          if ( !(((_BYTE)v15 + ~(_BYTE)a6) & 7) )
            goto LABEL_57;
          if ( v36 != 1 )
          {
            if ( v36 != 2 )
            {
              if ( v36 != 3 )
              {
                if ( v36 != 4 )
                {
                  if ( v36 != 5 )
                  {
                    if ( v36 != 6 )
                    {
                      v17 = *v16;
                      v16 = a6 + 2;
                      sub_6F832980(a3, v17, 8u);
                    }
                    v18 = *v16++;
                    sub_6F832980(a3, v18, 8u);
                  }
                  v19 = *v16++;
                  sub_6F832980(a3, v19, 8u);
                }
                v20 = *v16++;
                sub_6F832980(a3, v20, 8u);
              }
              v21 = *v16++;
              sub_6F832980(a3, v21, 8u);
            }
            v22 = *v16++;
            sub_6F832980(a3, v22, 8u);
          }
          v23 = *v16++;
          sub_6F832980(a3, v23, 8u);
          if ( v16 != v15 )
          {
LABEL_57:
            do
            {
              v24 = *v16;
              v16 += 8;
              sub_6F832980(a3, v24, 8u);
              sub_6F832980(a3, *(v16 - 7), 8u);
              sub_6F832980(a3, *(v16 - 6), 8u);
              sub_6F832980(a3, *(v16 - 5), 8u);
              sub_6F832980(a3, *(v16 - 4), 8u);
              sub_6F832980(a3, *(v16 - 3), 8u);
              sub_6F832980(a3, *(v16 - 2), 8u);
              sub_6F832980(a3, *(v16 - 1), 8u);
            }
            while ( v16 != v15 );
          }
        }
      }
      v25 = 0;
      sub_6F832820(a3, *(_DWORD *)(a7 + 8), 0x20u);
      if ( *(_DWORD *)(a7 + 8) > 0 )
      {
        do
        {
          while ( !*(_DWORD *)(*(_DWORD *)a7 + 4 * v25) )
          {
            ++v25;
            sub_6F832820(a3, 0, 0x20u);
            if ( *(_DWORD *)(a7 + 8) <= v25 )
              goto LABEL_8;
          }
          sub_6F832820(a3, *(_DWORD *)(*(_DWORD *)(a7 + 4) + 4 * v25), 0x20u);
          v26 = *(_DWORD *)(*(_DWORD *)(a7 + 4) + 4 * v25);
          v27 = *(_BYTE **)(*(_DWORD *)a7 + 4 * v25);
          if ( v26 > 0 )
          {
            v37 = (int)&v27[v26];
            v38 = *(_DWORD *)(*(_DWORD *)a7 + 4 * v25);
            v39 = ((_BYTE)v27 + (_BYTE)v26 + ~(_BYTE)v27) & 7;
            sub_6F832980(a3, *v27, 8u);
            v28 = (_BYTE *)(v38 + 1);
            if ( v38 + 1 != v37 )
            {
              if ( !v39 )
                goto LABEL_58;
              if ( v39 != 1 )
              {
                if ( v39 != 2 )
                {
                  if ( v39 != 3 )
                  {
                    if ( v39 != 4 )
                    {
                      if ( v39 != 5 )
                      {
                        if ( v39 != 6 )
                        {
                          v28 = (_BYTE *)(v38 + 2);
                          sub_6F832980(a3, *(_BYTE *)(v38 + 1), 8u);
                        }
                        v29 = *v28++;
                        sub_6F832980(a3, v29, 8u);
                      }
                      v30 = *v28++;
                      sub_6F832980(a3, v30, 8u);
                    }
                    v31 = *v28++;
                    sub_6F832980(a3, v31, 8u);
                  }
                  v32 = *v28++;
                  sub_6F832980(a3, v32, 8u);
                }
                v33 = *v28++;
                sub_6F832980(a3, v33, 8u);
              }
              v34 = *v28++;
              sub_6F832980(a3, v34, 8u);
              if ( v28 != (_BYTE *)v37 )
              {
LABEL_58:
                do
                {
                  v35 = *v28;
                  v28 += 8;
                  sub_6F832980(a3, v35, 8u);
                  sub_6F832980(a3, *(v28 - 7), 8u);
                  sub_6F832980(a3, *(v28 - 6), 8u);
                  sub_6F832980(a3, *(v28 - 5), 8u);
                  sub_6F832980(a3, *(v28 - 4), 8u);
                  sub_6F832980(a3, *(v28 - 3), 8u);
                  sub_6F832980(a3, *(v28 - 2), 8u);
                  sub_6F832980(a3, *(v28 - 1), 8u);
                }
                while ( v28 != (_BYTE *)v37 );
              }
            }
          }
          ++v25;
        }
        while ( *(_DWORD *)(a7 + 8) > v25 );
      }
      goto LABEL_8;
    }
  }
  return -1;
}
