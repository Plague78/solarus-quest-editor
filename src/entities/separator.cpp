/*
 * Copyright (C) 2014-2015 Christopho, Solarus - http://www.solarus-games.org
 *
 * Solarus Quest Editor is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Solarus Quest Editor is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include "entities/separator.h"

/**
 * @brief Constructor.
 * @param map The map containing the entity.
 * @param index Index of the entity in the map.
 */
Separator::Separator(MapModel& map, const EntityIndex& index) :
  EntityModel(map, index, EntityType::SEPARATOR) {

  // Separators can be extended either horizontally or vertically, but not both.
  set_resize_mode(ResizeMode::SINGLE_DIMENSION);
  set_base_size(QSize(16, 16));  // One of the width or height must remain equal to 16.

  DrawShapeInfo info;
  info.enabled = true;
  info.between_border_color = QColor(142, 142, 142);
  info.pixmap = QPixmap(":/images/entity_separator_resizable.png");
  info.tiled_pixmap = true;
  set_draw_shape_info(info);
}
