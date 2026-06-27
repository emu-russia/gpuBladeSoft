unsigned int __cdecl sub_6F85E834(int a1)
{
  int v1; // ecx@1
  unsigned int v2; // edx@3
  int v3; // esi@3
  unsigned int result; // eax@3
  int v5; // eax@19

  v1 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(a1 + 28) >> 24 || *(_BYTE *)(a1 + 35) )
  {
    v5 = *(_DWORD *)a1;
    *(_DWORD *)(v5 + 20) = 42;
    *(_DWORD *)(v5 + 24) = 65500;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
    v1 = *(_DWORD *)(a1 + 28);
  }
  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(_DWORD *)(a1 + 360);
  result = v3 * *(_DWORD *)(a1 + 60);
  if ( v2 >= result )
  {
    *(_DWORD *)(a1 + 64) = v3 * v1;
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a1 + 32) * v3;
    *(_DWORD *)(a1 + 260) = 1;
    *(_DWORD *)(a1 + 264) = 1;
  }
  else if ( result <= 2 * v2 )
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 2);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 2);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 2;
    *(_DWORD *)(a1 + 264) = 2;
  }
  else if ( result <= 3 * v2 )
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 3);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 3);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 3;
    *(_DWORD *)(a1 + 264) = 3;
  }
  else if ( result <= 4 * v2 )
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 4);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 4);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 4;
    *(_DWORD *)(a1 + 264) = 4;
  }
  else if ( result <= 5 * v2 )
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 5);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 5);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 5;
    *(_DWORD *)(a1 + 264) = 5;
  }
  else if ( result <= 6 * v2 )
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 6);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 6);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 6;
    *(_DWORD *)(a1 + 264) = 6;
  }
  else if ( result <= 7 * v2 )
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 7);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 7);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 7;
    *(_DWORD *)(a1 + 264) = 7;
  }
  else if ( result <= 8 * v2 )
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 8);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 8);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 8;
    *(_DWORD *)(a1 + 264) = 8;
  }
  else if ( result <= 9 * v2 )
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 9);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 9);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 9;
    *(_DWORD *)(a1 + 264) = 9;
  }
  else if ( result <= 10 * v2 )
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 10);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 10);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 10;
    *(_DWORD *)(a1 + 264) = 10;
  }
  else if ( result <= 11 * v2 )
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 11);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 11);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 11;
    *(_DWORD *)(a1 + 264) = 11;
  }
  else if ( result <= 12 * v2 )
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 12);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 12);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 12;
    *(_DWORD *)(a1 + 264) = 12;
  }
  else if ( result <= 13 * v2 )
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 13);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 13);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 13;
    *(_DWORD *)(a1 + 264) = 13;
  }
  else if ( result <= 14 * v2 )
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 14);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 14);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 14;
    *(_DWORD *)(a1 + 264) = 14;
  }
  else if ( result <= 15 * v2 )
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 15);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 15);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 15;
    *(_DWORD *)(a1 + 264) = 15;
  }
  else
  {
    *(_DWORD *)(a1 + 64) = sub_6F868CC4(v3 * v1, 16);
    result = sub_6F868CC4(*(_DWORD *)(a1 + 360) * *(_DWORD *)(a1 + 32), 16);
    *(_DWORD *)(a1 + 68) = result;
    *(_DWORD *)(a1 + 260) = 16;
    *(_DWORD *)(a1 + 264) = 16;
  }
  return result;
}
