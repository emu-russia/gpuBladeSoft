int __usercall sub_6F7AF400@<eax>(int result@<eax>)
{
  unsigned int v1; // edx@1
  unsigned int v2; // ebx@1
  int v3; // ecx@6
  int v4; // ebx@7
  int v5; // ecx@7
  int v6; // esi@7
  int v7; // ebx@7
  int v8; // ecx@7
  int v9; // esi@13
  int v10; // ebx@13
  int v11; // edx@14
  int v12; // esi@14

  v1 = *(_DWORD *)(result + 416);
  v2 = v1 + 24 * *(_DWORD *)(result + 408);
  if ( v1 >= v2 )
  {
LABEL_10:
    *(_DWORD *)(result + 12) = 128;
  }
  else
  {
    while ( *(_BYTE *)(v1 + 12) != *(_BYTE *)(result + 368) || !*(_BYTE *)(v1 + 16) )
    {
      v1 += 24;
      if ( v2 <= v1 )
        goto LABEL_10;
    }
    v3 = *(_DWORD *)(result + 428);
    if ( v3 >= *(_DWORD *)(result + 432) )
    {
      *(_DWORD *)(result + 12) = 130;
    }
    else
    {
      v4 = v3 + 1;
      v5 = *(_DWORD *)(result + 436) + 16 * v3;
      v6 = *(_DWORD *)(result + 360);
      *(_DWORD *)(result + 428) = v4;
      v7 = *(_DWORD *)(result + 352);
      *(_DWORD *)(v5 + 8) = 1;
      *(_DWORD *)(v5 + 12) = v1;
      *(_DWORD *)v5 = v7;
      *(_DWORD *)(v5 + 4) = v6 + 1;
      v8 = *(_DWORD *)v1;
      if ( (unsigned int)(*(_DWORD *)v1 - 1) <= 2 )
      {
        v9 = result + 8 * v8;
        v10 = *(_DWORD *)(v9 + 436);
        if ( v10 )
        {
          v11 = *(_DWORD *)(v1 + 4);
          v12 = *(_DWORD *)(v9 + 440);
          if ( v11 > v12 )
          {
            *(_DWORD *)(result + 12) = 131;
          }
          else
          {
            *(_DWORD *)(result + 356) = v10;
            *(_DWORD *)(result + 364) = v12;
            *(_DWORD *)(result + 360) = v11;
            *(_DWORD *)(result + 352) = v8;
          }
        }
        else
        {
          *(_DWORD *)(result + 12) = 138;
        }
      }
      else
      {
        *(_DWORD *)(result + 12) = 132;
      }
      *(_BYTE *)(result + 376) = 0;
    }
  }
  return result;
}
