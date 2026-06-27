signed int __cdecl sub_6F7B89D0(int a1, int a2, unsigned int a3, void *a4, signed int a5)
{
  unsigned int v5; // ebx@1
  unsigned __int64 v6; // rdi@1
  signed int result; // eax@4
  const char *v8; // ebp@18
  size_t v9; // eax@19
  size_t v10; // ebp@104
  int v11; // eax@106
  size_t v12; // eax@113
  size_t v13; // ebp@113
  int v14; // eax@129
  const void *v15; // [sp+1Ch] [bp-20h]@113

  v5 = 0;
  HIDWORD(v6) = a4;
  if ( a5 >= 0 )
    v5 = a5;
  switch ( a2 )
  {
    case 44:
      if ( !a4 || v5 <= 1 )
        goto LABEL_157;
      *(_WORD *)a4 = *(_WORD *)(a1 + 164);
      return 2;
    case 43:
      if ( !a4 || v5 <= 1 )
        goto LABEL_157;
      *(_WORD *)a4 = *(_WORD *)(a1 + 160);
      return 2;
    case 42:
      if ( !a4 || v5 <= 1 )
        goto LABEL_157;
      *(_WORD *)a4 = *(_WORD *)(a1 + 158);
      return 2;
    case 41:
      if ( !a4 || !v5 )
        goto LABEL_156;
      *(_BYTE *)a4 = *(_BYTE *)(a1 + 156);
      return 1;
    case 40:
      v8 = *(const char **)(a1 + 148);
      goto LABEL_19;
    case 39:
      v8 = *(const char **)(a1 + 144);
      goto LABEL_19;
    case 38:
      v8 = *(const char **)(a1 + 140);
      goto LABEL_19;
    case 37:
      v8 = *(const char **)(a1 + 136);
      goto LABEL_19;
    case 36:
      v8 = *(const char **)(a1 + 132);
      goto LABEL_19;
    case 35:
      if ( !a4 || v5 <= 3 )
        goto LABEL_155;
      *(_DWORD *)a4 = *(_DWORD *)(a1 + 352);
      return 4;
    case 34:
      if ( !a4 || v5 <= 3 )
        goto LABEL_155;
      *(_DWORD *)a4 = *(_DWORD *)(a1 + 356);
      return 4;
    case 32:
      if ( a3 > 1 )
        goto LABEL_4;
      if ( !a4 || v5 <= 1 )
        goto LABEL_157;
      *(_WORD *)a4 = *(_WORD *)(a1 + 2 * a3 + 360);
      return 2;
    case 31:
      if ( !a4 || !v5 )
        goto LABEL_156;
      *(_BYTE *)a4 = *(_BYTE *)(a1 + 295);
      return 1;
    case 33:
      if ( !a4 || v5 <= 3 )
        goto LABEL_155;
      *(_DWORD *)a4 = *(_DWORD *)(a1 + 172);
      return 4;
    case 30:
      if ( !a4 || !v5 )
        goto LABEL_156;
      *(_BYTE *)a4 = *(_BYTE *)(a1 + 294);
      return 1;
    case 29:
      if ( a3 >= *(_BYTE *)(a1 + 293) )
        goto LABEL_4;
      if ( !a4 || v5 <= 1 )
        goto LABEL_157;
      *(_WORD *)a4 = *(_WORD *)(a1 + 2 * a3 + 322);
      return 2;
    case 28:
      if ( !a4 || !v5 )
        goto LABEL_156;
      *(_BYTE *)a4 = *(_BYTE *)(a1 + 293);
      return 1;
    case 27:
      if ( a3 >= *(_BYTE *)(a1 + 292) )
        goto LABEL_4;
      if ( !a4 || v5 <= 1 )
        goto LABEL_157;
      *(_WORD *)a4 = *(_WORD *)(a1 + 2 * a3 + 296);
      return 2;
    case 26:
      if ( !a4 || !v5 )
        goto LABEL_156;
      *(_BYTE *)a4 = *(_BYTE *)(a1 + 292);
      return 1;
    case 25:
      if ( !a4 || v5 <= 3 )
        goto LABEL_155;
      *(_DWORD *)a4 = *(_DWORD *)(a1 + 280);
      return 4;
    case 24:
      if ( !a4 || v5 <= 3 )
        goto LABEL_155;
      *(_DWORD *)a4 = *(_DWORD *)(a1 + 276);
      return 4;
    case 23:
      if ( a3 >= *(_BYTE *)(a1 + 179) )
        goto LABEL_4;
      if ( !a4 || v5 <= 1 )
        goto LABEL_157;
      *(_WORD *)a4 = *(_WORD *)(a1 + 2 * a3 + 256);
      return 2;
    case 22:
      if ( !a4 || !v5 )
        goto LABEL_156;
      *(_BYTE *)a4 = *(_BYTE *)(a1 + 179);
      return 1;
    case 21:
      if ( a3 >= *(_BYTE *)(a1 + 178) )
        goto LABEL_4;
      if ( !a4 || v5 <= 1 )
        goto LABEL_157;
      *(_WORD *)a4 = *(_WORD *)(a1 + 2 * a3 + 228);
      return 2;
    case 20:
      if ( !a4 || !v5 )
        goto LABEL_156;
      *(_BYTE *)a4 = *(_BYTE *)(a1 + 178);
      return 1;
    case 19:
      if ( a3 >= *(_BYTE *)(a1 + 177) )
        goto LABEL_4;
      if ( !a4 || v5 <= 1 )
        goto LABEL_157;
      *(_WORD *)a4 = *(_WORD *)(a1 + 2 * a3 + 208);
      return 2;
    case 18:
      if ( !a4 || !v5 )
        goto LABEL_156;
      *(_BYTE *)a4 = *(_BYTE *)(a1 + 177);
      return 1;
    case 17:
      if ( !a4 || v5 <= 3 )
        goto LABEL_155;
      *(_DWORD *)a4 = *(_DWORD *)(a1 + 284);
      return 4;
    case 16:
      if ( a3 >= *(_BYTE *)(a1 + 176) )
        goto LABEL_4;
      if ( !a4 || v5 <= 1 )
        goto LABEL_157;
      *(_WORD *)a4 = *(_WORD *)(a1 + 2 * a3 + 180);
      return 2;
    case 15:
      if ( !a4 || !v5 )
        goto LABEL_156;
      *(_BYTE *)a4 = *(_BYTE *)(a1 + 176);
      return 1;
    case 14:
      if ( !a4 || v5 <= 1 )
        goto LABEL_157;
      *(_WORD *)a4 = *(_WORD *)(a1 + 290);
      return 2;
    case 13:
      if ( a4 && v5 > 1 )
      {
        *(_WORD *)a4 = *(_WORD *)(a1 + 288);
        result = 2;
      }
      else
      {
LABEL_157:
        result = 2;
      }
      return result;
    case 12:
      if ( a3 >= *(_DWORD *)(a1 + 404) )
        goto LABEL_4;
      v10 = *(_DWORD *)(*(_DWORD *)(a1 + 412) + 4 * a3);
      LODWORD(v6) = v10 + 1;
      if ( !a4 || v5 < (unsigned int)v6 )
        goto LABEL_21;
      v11 = *(_DWORD *)(a1 + 408);
      goto LABEL_107;
    case 11:
      if ( !a4 || v5 <= 3 )
        goto LABEL_155;
      *(_DWORD *)a4 = *(_DWORD *)(a1 + 404);
      return 4;
    case 10:
      if ( *(_DWORD *)(a1 + 368) != 1 || a3 >= *(_DWORD *)(a1 + 372) )
        goto LABEL_4;
      v15 = *(const void **)(*(_DWORD *)(a1 + 388) + 4 * a3);
      v12 = strlen(*(const char **)(*(_DWORD *)(a1 + 388) + 4 * a3));
      v13 = v12;
      LODWORD(v6) = v12 + 1;
      if ( v5 >= v6 )
      {
        memcpy(a4, v15, v12);
        *((_BYTE *)a4 + v13) = 0;
      }
      goto LABEL_21;
    case 9:
      if ( !a4 || v5 <= 3 )
        goto LABEL_155;
      *(_DWORD *)a4 = *(_DWORD *)(a1 + 368);
      return 4;
    case 8:
      if ( a3 >= *(_DWORD *)(a1 + 416) )
        goto LABEL_4;
      v10 = *(_DWORD *)(*(_DWORD *)(a1 + 428) + 4 * a3);
      LODWORD(v6) = v10 + 1;
      if ( a4 && v5 >= (unsigned int)v6 )
      {
        v11 = *(_DWORD *)(a1 + 424);
LABEL_107:
        memcpy(a4, *(const void **)(v11 + 4 * a3), v10);
        *((_BYTE *)a4 + v10) = 0;
      }
      goto LABEL_21;
    case 7:
      if ( a3 >= *(_DWORD *)(a1 + 416) )
        goto LABEL_4;
      v8 = *(const char **)(*(_DWORD *)(a1 + 420) + 4 * a3);
      goto LABEL_19;
    case 6:
      if ( !a4 || v5 <= 3 )
        goto LABEL_155;
      *(_DWORD *)a4 = *(_DWORD *)(a1 + 416);
      return 4;
    case 5:
      if ( !a4 || v5 <= 3 )
        goto LABEL_155;
      v14 = *(_DWORD *)(a1 + 168);
      goto LABEL_130;
    case 4:
      v8 = *(const char **)(a1 + 364);
LABEL_19:
      v9 = strlen(v8);
      LODWORD(v6) = v9 + 1;
      if ( v5 >= v6 )
        memcpy(a4, v8, v9 + 1);
LABEL_21:
      if ( !(_DWORD)v6 )
        goto LABEL_4;
      return v6;
    case 3:
      if ( !a4 || !v5 )
        goto LABEL_156;
      *(_BYTE *)a4 = *(_BYTE *)(a1 + 432);
      return 1;
    case 2:
      if ( a3 > 3 )
        goto LABEL_4;
      if ( !a4 || v5 <= 3 )
        goto LABEL_155;
      switch ( a3 )
      {
        case 2u:
          v14 = *(_DWORD *)(a1 + 468);
          break;
        case 3u:
          v14 = *(_DWORD *)(a1 + 472);
          break;
        case 1u:
          v14 = *(_DWORD *)(a1 + 464);
          break;
        default:
          v14 = *(_DWORD *)(a1 + 460);
          break;
      }
      goto LABEL_130;
    case 1:
      if ( a3 > 3 )
        goto LABEL_4;
      if ( !a4 || v5 <= 3 )
        goto LABEL_155;
      switch ( a3 )
      {
        case 2u:
          v14 = *(_DWORD *)(a1 + 444);
          break;
        case 3u:
          v14 = *(_DWORD *)(a1 + 448);
          break;
        case 1u:
          v14 = *(_DWORD *)(a1 + 440);
          break;
        default:
          v14 = *(_DWORD *)(a1 + 436);
          break;
      }
LABEL_130:
      *(_DWORD *)a4 = v14;
      result = 4;
      break;
    case 0:
      if ( a4 && v5 )
      {
        *(_BYTE *)a4 = *(_BYTE *)(a1 + 433);
        result = 1;
      }
      else
      {
LABEL_156:
        result = 1;
      }
      break;
    case 45:
      if ( a4 && v5 > 3 )
      {
        *(_DWORD *)a4 = *(_DWORD *)(a1 + 152);
        result = 4;
      }
      else
      {
LABEL_155:
        result = 4;
      }
      break;
    default:
LABEL_4:
      result = -1;
      break;
  }
  return result;
}
