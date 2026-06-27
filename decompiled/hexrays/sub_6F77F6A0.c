signed int __cdecl sub_6F77F6A0(int a1)
{
  signed int result; // eax@1
  int v2; // edi@2
  int v3; // esi@2
  signed int v4; // edx@2
  unsigned int v5; // ecx@3
  int v6; // eax@6
  unsigned int v7; // ebp@6
  int v8; // edx@8
  int v9; // eax@10
  int v10; // edi@10
  signed int v11; // edx@10
  unsigned int v12; // ecx@11
  int v13; // eax@14
  unsigned int v14; // ebp@14
  int v15; // edx@16
  int v16; // eax@18
  int v17; // edi@18
  signed int v18; // edx@18
  unsigned int v19; // ecx@19
  int v20; // eax@22
  unsigned int v21; // ebp@22
  int v22; // edx@24
  int v23; // eax@26
  int v24; // edi@26
  signed int v25; // edx@26
  unsigned int v26; // ecx@27
  int v27; // eax@30
  unsigned int v28; // ebx@30
  int v29; // edx@32
  int v30; // eax@34
  int v31; // eax@37
  int v32; // eax@41
  int v33; // eax@45
  int v34; // eax@49

  result = 161;
  if ( *(_DWORD *)(a1 + 404) >= (unsigned int)(a1 + 32) )
  {
    v2 = *(_DWORD *)(a1 + 16);
    v3 = *(_DWORD *)(a1 + 412);
    v4 = *(_BYTE *)v2;
    if ( (_BYTE)v4 == 30 )
    {
      v6 = sub_6F77A6B0((_BYTE *)v2, *(_DWORD *)(a1 + 20), 0, 0);
      goto LABEL_10;
    }
    v5 = *(_DWORD *)(a1 + 20);
    if ( v4 == 28 )
    {
      v6 = 0;
      if ( v5 < v2 + 3 )
        goto LABEL_10;
      v31 = *(_BYTE *)(v2 + 2);
      v8 = (signed __int16)_byteswap_ushort(*(_WORD *)(v2 + 1));
    }
    else
    {
      if ( v4 != 29 )
      {
        if ( v4 > 246 )
        {
          v6 = 0;
          v7 = v2 + 2;
          if ( v4 <= 250 )
          {
            if ( v5 < v7 )
              goto LABEL_10;
            v8 = ((v4 - 247) << 8) + *(_BYTE *)(v2 + 1) + 108;
            goto LABEL_9;
          }
          if ( v5 >= v7 )
          {
            v8 = ((251 - v4) << 8) - *(_BYTE *)(v2 + 1) - 108;
            goto LABEL_9;
          }
LABEL_10:
          LOWORD(v9) = sub_6F7C9390(v6);
          v10 = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(v3 + 84) = v9;
          v11 = *(_BYTE *)v10;
          if ( (_BYTE)v11 == 30 )
          {
            v13 = sub_6F77A6B0((_BYTE *)v10, *(_DWORD *)(a1 + 24), 0, 0);
            goto LABEL_18;
          }
          v12 = *(_DWORD *)(a1 + 24);
          if ( v11 == 28 )
          {
            v13 = 0;
            if ( v12 < v10 + 3 )
              goto LABEL_18;
            v33 = *(_BYTE *)(v10 + 2);
            v15 = (signed __int16)_byteswap_ushort(*(_WORD *)(v10 + 1));
          }
          else
          {
            if ( v11 != 29 )
            {
              if ( v11 > 246 )
              {
                v13 = 0;
                v14 = v10 + 2;
                if ( v11 <= 250 )
                {
                  if ( v12 < v14 )
                    goto LABEL_18;
                  v15 = ((v11 - 247) << 8) + *(_BYTE *)(v10 + 1) + 108;
                  goto LABEL_17;
                }
                if ( v12 >= v14 )
                {
                  v15 = ((251 - v11) << 8) - *(_BYTE *)(v10 + 1) - 108;
                  goto LABEL_17;
                }
LABEL_18:
                LOWORD(v16) = sub_6F7C9390(v13);
                v17 = *(_DWORD *)(a1 + 24);
                *(_DWORD *)(v3 + 88) = v16;
                v18 = *(_BYTE *)v17;
                if ( (_BYTE)v18 == 30 )
                {
                  v20 = sub_6F77A6B0((_BYTE *)v17, *(_DWORD *)(a1 + 28), 0, 0);
                  goto LABEL_26;
                }
                v19 = *(_DWORD *)(a1 + 28);
                if ( v18 == 28 )
                {
                  v20 = 0;
                  if ( v19 < v17 + 3 )
                    goto LABEL_26;
                  v34 = *(_BYTE *)(v17 + 2);
                  v22 = (signed __int16)_byteswap_ushort(*(_WORD *)(v17 + 1));
                }
                else
                {
                  if ( v18 != 29 )
                  {
                    if ( v18 > 246 )
                    {
                      v20 = 0;
                      v21 = v17 + 2;
                      if ( v18 <= 250 )
                      {
                        if ( v19 < v21 )
                          goto LABEL_26;
                        v22 = ((v18 - 247) << 8) + *(_BYTE *)(v17 + 1) + 108;
                        goto LABEL_25;
                      }
                      if ( v19 >= v21 )
                      {
                        v22 = ((251 - v18) << 8) - *(_BYTE *)(v17 + 1) - 108;
                        goto LABEL_25;
                      }
LABEL_26:
                      LOWORD(v23) = sub_6F7C9390(v20);
                      v24 = *(_DWORD *)(a1 + 28);
                      *(_DWORD *)(v3 + 92) = v23;
                      v25 = *(_BYTE *)v24;
                      if ( (_BYTE)v25 == 30 )
                      {
                        v27 = sub_6F77A6B0((_BYTE *)v24, *(_DWORD *)(a1 + 32), 0, 0);
                        goto LABEL_34;
                      }
                      v26 = *(_DWORD *)(a1 + 32);
                      if ( v25 == 28 )
                      {
                        v27 = 0;
                        if ( v26 < v24 + 3 )
                          goto LABEL_34;
                        v32 = *(_BYTE *)(v24 + 2);
                        v29 = (signed __int16)_byteswap_ushort(*(_WORD *)(v24 + 1));
                      }
                      else
                      {
                        if ( v25 != 29 )
                        {
                          if ( v25 <= 246 )
                          {
                            v29 = v25 - 139;
                          }
                          else
                          {
                            v27 = 0;
                            v28 = v24 + 2;
                            if ( v25 > 250 )
                            {
                              if ( v26 < v28 )
                                goto LABEL_34;
                              v29 = ((251 - v25) << 8) - *(_BYTE *)(v24 + 1) - 108;
                            }
                            else
                            {
                              if ( v26 < v28 )
                              {
LABEL_34:
                                LOWORD(v30) = sub_6F7C9390(v27);
                                *(_DWORD *)(v3 + 96) = v30;
                                return 0;
                              }
                              v29 = ((v25 - 247) << 8) + *(_BYTE *)(v24 + 1) + 108;
                            }
                          }
LABEL_33:
                          v27 = v29 << 16;
                          goto LABEL_34;
                        }
                        v27 = 0;
                        if ( v26 < v24 + 5 )
                          goto LABEL_34;
                        v29 = _byteswap_ulong(*(_DWORD *)(v24 + 1));
                        if ( v29 > 0x7FFF )
                        {
                          v27 = 0x7FFFFFFF;
                          goto LABEL_34;
                        }
                      }
                      if ( v29 < -32767 )
                      {
                        v27 = -2147483647;
                        goto LABEL_34;
                      }
                      goto LABEL_33;
                    }
                    v22 = v18 - 139;
LABEL_25:
                    v20 = v22 << 16;
                    goto LABEL_26;
                  }
                  v20 = 0;
                  if ( v19 < v17 + 5 )
                    goto LABEL_26;
                  v22 = _byteswap_ulong(*(_DWORD *)(v17 + 1));
                  if ( v22 > 0x7FFF )
                  {
                    v20 = 0x7FFFFFFF;
                    goto LABEL_26;
                  }
                }
                if ( v22 < -32767 )
                {
                  v20 = -2147483647;
                  goto LABEL_26;
                }
                goto LABEL_25;
              }
              v15 = v11 - 139;
LABEL_17:
              v13 = v15 << 16;
              goto LABEL_18;
            }
            v13 = 0;
            if ( v12 < v10 + 5 )
              goto LABEL_18;
            v15 = _byteswap_ulong(*(_DWORD *)(v10 + 1));
            if ( v15 > 0x7FFF )
            {
              v13 = 0x7FFFFFFF;
              goto LABEL_18;
            }
          }
          if ( v15 < -32767 )
          {
            v13 = -2147483647;
            goto LABEL_18;
          }
          goto LABEL_17;
        }
        v8 = v4 - 139;
LABEL_9:
        v6 = v8 << 16;
        goto LABEL_10;
      }
      v6 = 0;
      if ( v5 < v2 + 5 )
        goto LABEL_10;
      v8 = _byteswap_ulong(*(_DWORD *)(v2 + 1));
      if ( v8 > 0x7FFF )
      {
        v6 = 0x7FFFFFFF;
        goto LABEL_10;
      }
    }
    if ( v8 < -32767 )
    {
      v6 = -2147483647;
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  return result;
}
