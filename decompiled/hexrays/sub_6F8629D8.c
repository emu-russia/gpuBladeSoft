int __cdecl sub_6F8629D8(int a1)
{
  signed int v1; // ecx@1
  unsigned int v2; // eax@1
  unsigned int v3; // edx@1
  int result; // eax@18
  int v5; // ecx@18
  int v6; // esi@19
  int v7; // ebx@19
  int v8; // edx@19

  v1 = *(_DWORD *)(a1 + 384);
  v2 = v1 * *(_DWORD *)(a1 + 48);
  v3 = *(_DWORD *)(a1 + 52);
  if ( v2 <= v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(*(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(*(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 1;
    *(_DWORD *)(a1 + 284) = 1;
  }
  else if ( v2 <= 2 * v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(2 * *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(2 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 2;
    *(_DWORD *)(a1 + 284) = 2;
  }
  else if ( v2 <= 3 * v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(3 * *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(3 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 3;
    *(_DWORD *)(a1 + 284) = 3;
  }
  else if ( v2 <= 4 * v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(4 * *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(4 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 4;
    *(_DWORD *)(a1 + 284) = 4;
  }
  else if ( v2 <= 5 * v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(5 * *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(5 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 5;
    *(_DWORD *)(a1 + 284) = 5;
  }
  else if ( v2 <= 6 * v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(6 * *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(6 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 6;
    *(_DWORD *)(a1 + 284) = 6;
  }
  else if ( v2 <= 7 * v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(7 * *(_DWORD *)(a1 + 28), v1);
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(7 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 7;
    *(_DWORD *)(a1 + 284) = 7;
  }
  else if ( v2 <= 8 * v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(8 * *(_DWORD *)(a1 + 28), v1);
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(8 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 8;
    *(_DWORD *)(a1 + 284) = 8;
  }
  else if ( v2 <= 9 * v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(9 * *(_DWORD *)(a1 + 28), v1);
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(9 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 9;
    *(_DWORD *)(a1 + 284) = 9;
  }
  else if ( v2 <= 10 * v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(10 * *(_DWORD *)(a1 + 28), v1);
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(10 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 10;
    *(_DWORD *)(a1 + 284) = 10;
  }
  else if ( v2 <= 11 * v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(11 * *(_DWORD *)(a1 + 28), v1);
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(11 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 11;
    *(_DWORD *)(a1 + 284) = 11;
  }
  else if ( v2 <= 12 * v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(12 * *(_DWORD *)(a1 + 28), v1);
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(12 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 12;
    *(_DWORD *)(a1 + 284) = 12;
  }
  else if ( v2 <= 13 * v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(13 * *(_DWORD *)(a1 + 28), v1);
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(13 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 13;
    *(_DWORD *)(a1 + 284) = 13;
  }
  else if ( v2 <= 14 * v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(14 * *(_DWORD *)(a1 + 28), v1);
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(14 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 14;
    *(_DWORD *)(a1 + 284) = 14;
  }
  else if ( v2 > 15 * v3 )
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(16 * *(_DWORD *)(a1 + 28), v1);
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(16 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 16;
    *(_DWORD *)(a1 + 284) = 16;
  }
  else
  {
    *(_DWORD *)(a1 + 92) = sub_6F868CC4(15 * *(_DWORD *)(a1 + 28), v1);
    *(_DWORD *)(a1 + 96) = sub_6F868CC4(15 * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 384));
    *(_DWORD *)(a1 + 280) = 15;
    *(_DWORD *)(a1 + 284) = 15;
  }
  result = *(_DWORD *)(a1 + 196);
  v5 = *(_DWORD *)(a1 + 36);
  if ( v5 > 0 )
  {
    v6 = *(_DWORD *)(a1 + 280);
    v7 = *(_DWORD *)(a1 + 284);
    v8 = 0;
    do
    {
      *(_DWORD *)(result + 36) = v6;
      *(_DWORD *)(result + 40) = v7;
      ++v8;
      result += 88;
    }
    while ( v8 != v5 );
  }
  return result;
}
