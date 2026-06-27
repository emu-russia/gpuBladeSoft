int __cdecl sub_6F8612C0(int a1)
{
  int v1; // edx@1
  int v2; // eax@2
  int result; // eax@2
  int v4; // edx@7
  int v5; // edx@11
  char v6; // dl@16
  char v7; // dl@21
  int v8; // edx@23
  int v9; // edx@29
  int v10; // ecx@29
  int v11; // esi@29
  int v12; // edi@29
  int v13; // edx@32
  int v14; // edx@32
  int v15; // edx@36
  signed int v16; // [sp+4h] [bp-34h]@32

  v1 = *(_DWORD *)(a1 + 20);
  if ( (unsigned int)(v1 - 200) > 0xA )
  {
LABEL_2:
    v2 = *(_DWORD *)a1;
    *(_DWORD *)(v2 + 20) = 21;
    *(_DWORD *)(v2 + 24) = v1;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
    return 0;
  }
  switch ( v1 )
  {
    default:
      goto LABEL_2;
    case 200:
      (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 416) + 4))(a1);
      (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 24) + 8))(a1);
      *(_DWORD *)(a1 + 20) = 201;
      goto LABEL_6;
    case 201:
LABEL_6:
      result = (**(int (__cdecl ***)(_DWORD))(a1 + 416))(a1);
      if ( result != 1 )
        return result;
      v4 = *(_DWORD *)(a1 + 36);
      if ( v4 == 3 )
      {
        if ( !*(_BYTE *)(a1 + 256) )
        {
          if ( !*(_BYTE *)(a1 + 264) )
          {
            v9 = *(_DWORD *)(a1 + 196);
            v10 = *(_DWORD *)v9;
            v11 = *(_DWORD *)(v9 + 88);
            v12 = *(_DWORD *)(v9 + 176);
            if ( *(_DWORD *)v9 == 1 )
            {
              if ( v11 == 2 && v12 == 3 )
                goto LABEL_28;
            }
            else if ( v10 == 82 && v11 == 71 && v12 == 66 )
            {
              goto LABEL_17;
            }
            v13 = *(_DWORD *)a1;
            *(_DWORD *)(v13 + 24) = v10;
            *(_DWORD *)(v13 + 28) = v11;
            *(_DWORD *)(v13 + 32) = v12;
            v14 = *(_DWORD *)a1;
            *(_DWORD *)(*(_DWORD *)a1 + 20) = 113;
            v16 = 1;
LABEL_33:
            (*(void (__cdecl **)(int, signed int))(v14 + 4))(a1, v16);
            *(_DWORD *)(a1 + 40) = 3;
            result = 1;
            goto LABEL_18;
          }
          v6 = *(_BYTE *)(a1 + 265);
          if ( !v6 )
          {
LABEL_17:
            *(_DWORD *)(a1 + 40) = 2;
LABEL_18:
            *(_DWORD *)(a1 + 44) = 2;
            goto LABEL_11;
          }
          if ( v6 != 1 )
          {
            v15 = *(_DWORD *)a1;
            *(_DWORD *)(v15 + 20) = 116;
            *(_DWORD *)(v15 + 24) = *(_BYTE *)(a1 + 265);
            v14 = *(_DWORD *)a1;
            v16 = -1;
            goto LABEL_33;
          }
        }
LABEL_28:
        *(_DWORD *)(a1 + 40) = 3;
        goto LABEL_18;
      }
      if ( v4 == 4 )
      {
        if ( *(_BYTE *)(a1 + 264) && (v7 = *(_BYTE *)(a1 + 265)) != 0 )
        {
          if ( v7 == 2 )
          {
            *(_DWORD *)(a1 + 40) = 5;
          }
          else
          {
            v8 = *(_DWORD *)a1;
            *(_DWORD *)(v8 + 20) = 116;
            *(_DWORD *)(v8 + 24) = *(_BYTE *)(a1 + 265);
            (*(void (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, -1);
            *(_DWORD *)(a1 + 40) = 5;
            result = 1;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 40) = 4;
        }
        *(_DWORD *)(a1 + 44) = 4;
      }
      else if ( v4 == 1 )
      {
        *(_DWORD *)(a1 + 40) = 1;
        *(_DWORD *)(a1 + 44) = 1;
      }
      else
      {
        *(_DWORD *)(a1 + 40) = 0;
        *(_DWORD *)(a1 + 44) = 0;
      }
LABEL_11:
      v5 = *(_DWORD *)(a1 + 384);
      *(_DWORD *)(a1 + 48) = v5;
      *(_DWORD *)(a1 + 52) = v5;
      *(_DWORD *)(a1 + 56) = 0;
      *(_DWORD *)(a1 + 60) = 1072693248;
      *(_BYTE *)(a1 + 64) = 0;
      *(_BYTE *)(a1 + 65) = 0;
      *(_DWORD *)(a1 + 68) = 0;
      *(_BYTE *)(a1 + 72) = 1;
      *(_BYTE *)(a1 + 73) = 1;
      *(_BYTE *)(a1 + 74) = 0;
      *(_DWORD *)(a1 + 76) = 2;
      *(_BYTE *)(a1 + 80) = 1;
      *(_DWORD *)(a1 + 84) = 256;
      *(_DWORD *)(a1 + 116) = 0;
      *(_BYTE *)(a1 + 88) = 0;
      *(_BYTE *)(a1 + 89) = 0;
      *(_BYTE *)(a1 + 90) = 0;
      *(_DWORD *)(a1 + 20) = 202;
      return result;
    case 203:
    case 204:
    case 205:
    case 206:
    case 207:
    case 208:
    case 210:
      return (**(int (***)(void))(a1 + 416))();
    case 202:
      return 1;
  }
}
