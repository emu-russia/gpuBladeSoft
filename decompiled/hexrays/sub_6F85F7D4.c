int __cdecl sub_6F85F7D4(int a1, unsigned int a2)
{
  int v2; // eax@1
  int v3; // edx@2
  int v4; // eax@4
  int result; // eax@4
  int v6; // edx@6
  int v7; // edx@6
  int v8; // edx@6
  int v9; // edx@9
  int v10; // edx@9
  int v11; // edx@9
  int v12; // ecx@10
  int v13; // edx@11
  int v14; // edx@15
  int v15; // edx@16
  int v16; // edx@16
  int v17; // eax@17

  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 != 100 )
  {
    v3 = *(_DWORD *)a1;
    *(_DWORD *)(v3 + 20) = 21;
    *(_DWORD *)(v3 + 24) = v2;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  *(_DWORD *)(a1 + 80) = a2;
  *(_BYTE *)(a1 + 232) = 0;
  *(_BYTE *)(a1 + 240) = 0;
  if ( a2 <= 5 )
  {
    switch ( a2 )
    {
      case 4u:
        *(_BYTE *)(a1 + 240) = 1;
        *(_DWORD *)(a1 + 76) = 4;
        result = *(_DWORD *)(a1 + 84);
        *(_DWORD *)result = 67;
        *(_DWORD *)(result + 8) = 1;
        *(_DWORD *)(result + 12) = 1;
        *(_DWORD *)(result + 16) = 0;
        *(_DWORD *)(result + 20) = 0;
        *(_DWORD *)(result + 24) = 0;
        v6 = result + 88;
        *(_DWORD *)(result + 88) = 77;
        *(_DWORD *)(v6 + 8) = 1;
        *(_DWORD *)(v6 + 12) = 1;
        *(_DWORD *)(v6 + 16) = 0;
        *(_DWORD *)(v6 + 20) = 0;
        *(_DWORD *)(v6 + 24) = 0;
        v7 = result + 176;
        *(_DWORD *)(result + 176) = 89;
        *(_DWORD *)(v7 + 8) = 1;
        *(_DWORD *)(v7 + 12) = 1;
        *(_DWORD *)(v7 + 16) = 0;
        *(_DWORD *)(v7 + 20) = 0;
        *(_DWORD *)(v7 + 24) = 0;
        v8 = result + 264;
        *(_DWORD *)(result + 264) = 75;
        goto LABEL_7;
      case 5u:
        *(_BYTE *)(a1 + 240) = 1;
        *(_DWORD *)(a1 + 76) = 4;
        result = *(_DWORD *)(a1 + 84);
        *(_DWORD *)result = 1;
        *(_DWORD *)(result + 8) = 2;
        *(_DWORD *)(result + 12) = 2;
        *(_DWORD *)(result + 16) = 0;
        *(_DWORD *)(result + 20) = 0;
        *(_DWORD *)(result + 24) = 0;
        v9 = result + 88;
        *(_DWORD *)(result + 88) = 2;
        *(_DWORD *)(v9 + 8) = 1;
        *(_DWORD *)(v9 + 12) = 1;
        *(_DWORD *)(v9 + 16) = 1;
        *(_DWORD *)(v9 + 20) = 1;
        *(_DWORD *)(v9 + 24) = 1;
        v10 = result + 176;
        *(_DWORD *)(result + 176) = 3;
        *(_DWORD *)(v10 + 8) = 1;
        *(_DWORD *)(v10 + 12) = 1;
        *(_DWORD *)(v10 + 16) = 1;
        *(_DWORD *)(v10 + 20) = 1;
        *(_DWORD *)(v10 + 24) = 1;
        v11 = result + 264;
        *(_DWORD *)(result + 264) = 4;
        *(_DWORD *)(v11 + 8) = 2;
        *(_DWORD *)(v11 + 12) = 2;
        *(_DWORD *)(v11 + 16) = 0;
        *(_DWORD *)(v11 + 20) = 0;
        *(_DWORD *)(v11 + 24) = 0;
        break;
      case 0u:
        v12 = *(_DWORD *)(a1 + 36);
        *(_DWORD *)(a1 + 76) = v12;
        if ( (unsigned int)(v12 - 1) <= 9
          || (v17 = *(_DWORD *)a1,
              *(_DWORD *)(v17 + 20) = 27,
              *(_DWORD *)(v17 + 24) = v12,
              *(_DWORD *)(*(_DWORD *)a1 + 28) = 10,
              result = (**(int (__cdecl ***)(_DWORD))a1)(a1),
              v12 = *(_DWORD *)(a1 + 76),
              v12 > 0) )
        {
          result = *(_DWORD *)(a1 + 84);
          v13 = 0;
          do
          {
            *(_DWORD *)result = v13;
            *(_DWORD *)(result + 8) = 1;
            *(_DWORD *)(result + 12) = 1;
            *(_DWORD *)(result + 16) = 0;
            *(_DWORD *)(result + 20) = 0;
            *(_DWORD *)(result + 24) = 0;
            ++v13;
            result += 88;
          }
          while ( v13 != v12 );
        }
        break;
      case 1u:
        *(_BYTE *)(a1 + 232) = 1;
        *(_DWORD *)(a1 + 76) = 1;
        result = *(_DWORD *)(a1 + 84);
        *(_DWORD *)result = 1;
        *(_DWORD *)(result + 8) = 1;
        *(_DWORD *)(result + 12) = 1;
        *(_DWORD *)(result + 16) = 0;
        *(_DWORD *)(result + 20) = 0;
        *(_DWORD *)(result + 24) = 0;
        break;
      case 2u:
        *(_BYTE *)(a1 + 240) = 1;
        *(_DWORD *)(a1 + 76) = 3;
        result = *(_DWORD *)(a1 + 84);
        *(_DWORD *)result = 82;
        *(_DWORD *)(result + 8) = 1;
        *(_DWORD *)(result + 12) = 1;
        *(_DWORD *)(result + 16) = 0;
        *(_DWORD *)(result + 20) = 0;
        *(_DWORD *)(result + 24) = 0;
        v14 = result + 88;
        *(_DWORD *)(result + 88) = 71;
        *(_DWORD *)(v14 + 8) = 1;
        *(_DWORD *)(v14 + 12) = 1;
        *(_DWORD *)(v14 + 16) = 0;
        *(_DWORD *)(v14 + 20) = 0;
        *(_DWORD *)(v14 + 24) = 0;
        v8 = result + 176;
        *(_DWORD *)(result + 176) = 66;
LABEL_7:
        *(_DWORD *)(v8 + 8) = 1;
        *(_DWORD *)(v8 + 12) = 1;
        *(_DWORD *)(v8 + 16) = 0;
        *(_DWORD *)(v8 + 20) = 0;
        *(_DWORD *)(v8 + 24) = 0;
        break;
      case 3u:
        *(_BYTE *)(a1 + 232) = 1;
        *(_DWORD *)(a1 + 76) = 3;
        result = *(_DWORD *)(a1 + 84);
        *(_DWORD *)result = 1;
        *(_DWORD *)(result + 8) = 2;
        *(_DWORD *)(result + 12) = 2;
        *(_DWORD *)(result + 16) = 0;
        *(_DWORD *)(result + 20) = 0;
        *(_DWORD *)(result + 24) = 0;
        v15 = result + 88;
        *(_DWORD *)(result + 88) = 2;
        *(_DWORD *)(v15 + 8) = 1;
        *(_DWORD *)(v15 + 12) = 1;
        *(_DWORD *)(v15 + 16) = 1;
        *(_DWORD *)(v15 + 20) = 1;
        *(_DWORD *)(v15 + 24) = 1;
        v16 = result + 176;
        *(_DWORD *)(result + 176) = 3;
        *(_DWORD *)(v16 + 8) = 1;
        *(_DWORD *)(v16 + 12) = 1;
        *(_DWORD *)(v16 + 16) = 1;
        *(_DWORD *)(v16 + 20) = 1;
        *(_DWORD *)(v16 + 24) = 1;
        break;
      default:
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 11;
    result = (*(int (__cdecl **)(int))v4)(a1);
  }
  return result;
}
