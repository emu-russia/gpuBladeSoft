unsigned int sub_6F751960()
{
  unsigned int result; // eax@1
  signed int v1; // edi@1
  unsigned __int16 v2; // si@2
  int v3; // edx@4
  int v4; // ecx@4
  __int16 v5; // si@4
  int v6; // edx@4
  __int16 v7; // si@4
  __int16 v8; // [sp+2h] [bp-16h]@4
  int v9; // [sp+4h] [bp-14h]@4

  result = 0;
  v1 = 0;
  while ( 1 )
  {
    word_701D88E0[result / 2] = (unsigned __int8)result;
    dword_700D88E0[2 * result / 4] = (unsigned __int8)result;
    v3 = (unsigned __int8)result | (v1 << 9) & 0xF80000 | ((_WORD)v1 << 6) & 0xF800;
    v9 = v3;
    v4 = (v1 >> 2) & 0xF8;
    dword_6FCBFE50[v1] = v3;
    v5 = (v1 >> 2) & 0xF8;
    v8 = v5;
    word_701D88E2[result / 2] = v5;
    v6 = (v1 >> 7) & 0xF8;
    v7 = (v1 >> 7) & 0xF8;
    dword_700D88E4[2 * result / 4] = v4;
    word_701D88E4[result / 2] = v7;
    dword_700D88E8[2 * result / 4] = v6;
    if ( v1 )
      break;
    dword_700588E0[0] = 0;
    dword_700588E4[0] = 0;
    dword_6FBBFE50[0] = 0;
    dword_6FBBFE54[0] = 0;
    dword_6FBBFE58[0] = 0;
    dword_6FBBFE5C[0] = 0;
    dword_6FCFFFB0[0] = 0;
LABEL_3:
    ++v1;
    result += 8;
  }
  dword_6FBBFE58[2 * result / 4] = v6;
  LOWORD(dword_700588E4[result / 4]) = v7;
  dword_6FBBFE54[2 * result / 4] = v4;
  v2 = ((unsigned __int16)v1 >> 8) | 0x7F;
  LOWORD(dword_700588E0[result / 4]) = (unsigned __int8)result;
  dword_6FBBFE50[2 * result / 4] = (unsigned __int8)result;
  HIWORD(dword_700588E0[result / 4]) = v8;
  HIWORD(dword_700588E4[result / 4]) = v2;
  dword_6FBBFE5C[2 * result / 4] = v2;
  dword_6FCFFFB0[v1] = v9 | (result << 13) & 0x80000000 | 0x7F000000;
  if ( v1 != 0xFFFF )
    goto LABEL_3;
  return result;
}
