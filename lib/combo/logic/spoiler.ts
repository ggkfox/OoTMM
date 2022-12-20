import { Options } from '../options';
import { Settings } from '../settings';
import { Hints } from './hints';
import { ItemPlacement } from './solve';
import { World } from './world';

const spoilerSettings = (buffer: string[], settings: Settings) => {
  buffer.push('Settings');
  for (const s in settings) {
    const v = (settings as any)[s];
    buffer.push(`  ${s}: ${v}`);
  }
  buffer.push('');
};

const spoilerHints = (buffer: string[], hints: Hints, placement: ItemPlacement) => {
  buffer.push('Hints');
  for (const gossip in hints.gossip) {
    const h = hints.gossip[gossip];
    if (h.type === 'hero') {
      buffer.push(`  ${gossip}: Hero, ${h.region} (${h.location}: ${placement[h.location]})`);
    }
    if (h.type === 'foolish') {
      buffer.push(`  ${gossip}: Foolish, ${h.region}`);
    }
    if (h.type === 'item-exact') {
      buffer.push(`  ${gossip}: Item-Exact, ${h.check} (${h.items.join(', ')})`);
    }
    if (h.type === 'item-region') {
      buffer.push(`  ${gossip}: Item-Region, ${h.region} (${h.item})`);
    }
  }
  buffer.push('');
};

const spoilerRaw = (buffer: string[], placement: ItemPlacement) => {
  for (const loc in placement) {
    buffer.push(`${loc}: ${placement[loc]}`);
  }
  buffer.push('');
};

const spoilerSpheres = (buffer: string[], world: World, placement: ItemPlacement, spheres: string[][]) => {
  for (const i in spheres) {
    buffer.push(`Sphere ${i}`);
    const sphere = spheres[i];
    for (const loc of sphere) {
      buffer.push(`  ${loc}: ${placement[loc]}`);
    }
    buffer.push('');
  }
};

export const spoiler = (world: World, placement: ItemPlacement, spheres: string[][], opts: Options, hints: Hints) => {
  const buffer: string[] = [];
  buffer.push(`Seed: ${opts.seed}`);
  buffer.push('');
  spoilerSettings(buffer, opts.settings);
  spoilerHints(buffer, hints, placement);
  if (!opts.settings.noLogic) {
    spoilerSpheres(buffer, world, placement, spheres);
  }
  spoilerRaw(buffer, placement);
  return buffer.join("\n");
};
